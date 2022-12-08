#include <algorithm>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>

std::vector<std::string> testInput = {
"vJrwpWtwJgWrhcsFMMfFFhFp",
"jqHRNqRjqzjGDLGLrsFMfFZSrLrFZsSL",
"PmmdzqPrVvPwwTWBwg",
"wMqvLMZHhHMvwLHjbvcjnnSBnvTQFn",
"ttgJtRGJQctTZtZT",
"CrZsJsPPZsGzwwsLwLmpwMDw"
};

std::vector<std::string> input = {
"ZTmtZvZLTFNLMQMNRvZncdcHwcScJvcdHnVfwV",
"zqjqrzqjCqrjtqWhqChqrznhcfdfVnVSVgcffcgJcSgd",
"rtDGpzjjqjlrGsWqBWFRsbTPFQMTbRNRFmbs",
"FFlnlnVlmQqcBVhBRrSrGSwVdRJbztSt",
"NPPNsffWfNztRZSJNG",
"WpgpTTHDpgTDDpMLPGgMHslmBmmHcBQnFmcqhmnjlqQm",
"VlVNLlPQhtnDRPnP",
"QgqTffzZqgvgzWmqqZmGcDthtRFvnnFnhJtJJDDt",
"WGTBzSqBQTQmZBWHswpNbswLbSNCNl",
"PFzFQDdLjMzzQDhnDNmwZmqwRsmRRmMVNM",
"GtSbbtlttvvtBvtHBmqqNqVVwsVgCmRw",
"brlvctHfrlrqvGvcTpjDdFnLDhdfjLhQpn",
"fTqzgFrcmzTrTNgMzFzTrgtbMtVMVPSLVbvSStRttPVV",
"lsHnlQhplQpsHhlDJsswNwZPZZVNwvnSZSVvVS",
"BJpsGWhWQQHdGHlpWpfgrmqgNBmTTBqzTrzr",
"PLPPrDNHDBnrWNBmjDmjbqqgzjgjQC",
"GJpFwpvFFsJpwvwwGwJZJRptzdQSSZTmCjTQmTSQjjZSggQQ",
"ffwGGtJGCfLcNMNNfNLW",
"nlTzllGwlQHHGMSrrhQLcvbcghgcvL",
"fFNpttBRFFRNtJJnfNWmqbhhZrZrcjgpvLrvrvcvbr",
"JBftFFsVRWtNWRsmWtRfftGHGPDDCnTDHSCwzwVnwGSw",
"LsrZLbLmPSTZtPcc",
"zpnpljpdwhRpfNLlPWPtTPcnMWPcctTV",
"qlhNNjldqdpgqdfhjpphdsgmmrDBBJJQgHrmDHLQJb",
"ndDrsBbpqspHCjzVBCHjMj",
"LWFcQFQtVVdcCMHC",
"RLthwTWLTSLwTllRLLlLNlPpPGfrGnqDdGqsZqsZsZhb",
"jHnJLJrcBbrRHJpnLBBjdHbjfgvGwstwWwdsWWshfhFzFfhv",
"PZDQMNTMQwtgvGTGhf",
"lqlPPQZQVSQCPSCPDmLppjqRqHngLHjRgLnL",
"MfQrhdzNMfMPsNNmPmqPLCLCVLBnbP",
"WVtcVvJJVjvFZZmgGjnjLBjmnnHB",
"FFtcZRpWJcSDTwlVMhMDwrrDzM",
"bSMbrQGZwwqbrbGMdTQGMwQdfFBLDLHLHssDgsHHBJDsFfwL",
"lpPPCccvVPvccPzcWLDJFJBsBzJJHsqHjg",
"tnqlPlVlNvNZZSSrGGZb",
"NlBBBBBwmwcMgLwLVVLLLscHdnMDdbHJCbdvJbPdDDJHvn",
"ZRWQWSfGhtSjqZhffZhhRjtdvPFHvCJbFdCFFDdHJdPb",
"fpqGhQWWZRhfqRSqrpGllLcVLmscgrLwBmgCzN",
"wHHHwDNCzZwzZfpzwsswzfzvnvnMDMgMhMGGFGRVdMnvcF",
"mLtttqTPBtSJTSBQWlmcMvVdclnvhFggdGhRdn",
"QBLPSLQQWmLtTBtBSjZfsbwbHzpjGzHfpzzw",
"zDPBqBPqwzzsqlTzzPzqjttNbCPJVtPCbrvjvCZP",
"MFhMhGfFfGpWWpHhFfRpHjVNbDbJjVMjrVvVNtMtbt",
"gfRSmpggSFRgfGRphFGgfgBSBTqzSsdlTLqdsnsDBqLw",
"QTTdWZZZTrhCZrjhVt",
"SBJJNRRvvRpwwspNSpTPjCMVhhtCjGThjBjB",
"fJJpvRRwNRSwvzRzRvzSgSRNqFTFDbFmqncQTbdFfnbDQnLW",
"wSjwwjWhbhhjWjdqSVpqSndvMdmM",
"NTvPBrZgPPHDFrFHGvZHRBqVBpCQVRRdmpRppdqM",
"TgDHZPsNTWbbwsjtvw",
"HVRPRwJVppQNpGmvMvmqqq",
"WcttbWsWsdDdbFDSSWclZGvFLMvfvjfzNvLGzLmfqv",
"tglcmSldWlBQBThRQBhg",
"LDGGfPFLGsfFnGLfMzfJVccNzmcmwm",
"qggSRgtjgCRtdtNZCJMCcZwTZVcm",
"RBbHbbRRnLBDDrvN",
"pThhMtMtTsWspWTnGjpsVHPdjdjvHdgVvLDVVSjd",
"JQNrrwCFrSRLRVLnSN",
"JQcJFCfcnfQmrbblQqlthGqzpZpGTBMWTMqtst",
"DzVmzDDgsNdHHLGJhJppPPllqSgbql",
"jrBWjcQMCRchPShwSblpbW",
"ZjRrSCtnnrtBQTcrSZmGtGFFNDHmHVVmVtzz",
"GSbGbrTGRRScMlVFjfbqqjdF",
"tvDmZhtNtHDttBhCmHDJHNwlpjslMwfflvpqldsFpMlf",
"HdBhLDhJDLWWLDCSQGcrQPGccLTGcQ",
"tNzrCdJBrrtQdtgQdlQQtrnMZhMTqzHqqTFZZFqTHFMV",
"bwbsRDvfwfsfcfSFqMmqDqFVNMNVVH",
"PRvfbSjNvPWPlLllLJ",
"MjMRRNRMjZtGVGpBCMMCDV",
"vwfhFzhvcJQQwJlQSddzQwFWGqcDpCDqBqDTcGZTTVTCWG",
"dvFJzrfZJhddLNLPHsrtRbPr",
"BmbsFNBhszGgGtGl",
"MSHVwdSwZflGlcqqpM",
"QvwZCnnnSvZdCSWrNmDlPPBPDhPmjW",
"MDwpRzRwMzMsdVSjdMWWMQdW",
"gmlftnDtHnHHVWSWBjWjWgvW",
"HbtrhbbGRNDpbCDz",
"cjVGqQqVqBFhDtvB",
"ZnTTfTffZZmDhBtJZG",
"fNzbpzlHTlgHNzlRTlRNbHrWwrCwWSSdQddNjwVcjGSd",
"WWrPMhwhnjpSLCpDlSSW",
"sNGBGdmTbZNGsmbstNLZGZDBRSlqSRCfRSCqRRDDqCqp",
"NvvcGtsLdTNZmLTmdJPcnnMFjFMcrVJhMF",
"wMRQMSQZHznRsqRbWp",
"ddgDDhfDrrDdjthHmdHrzpbVCVWFpfVqCWpWqpFs",
"hdvNdHtjMLJZvJwM",
"nWzZtWzHzZWgQHMNLDMDfDBfQbdD",
"MCPmRGGhqdmNjbDN",
"FRPlMlRChCvFggWZsHsZHn",
"ZGhhjdgwgcZHsPnRnSnbWscn",
"tltlfMQQQftDFJpMQJsWJWJsnWBnRSBbrBWP",
"lfLDpQMFMNfLjGjPPgZzwh",
"HcmvWcqnHLLPDzPPHM",
"MGGSfdJRdCglfrLjrjrLzLPzlF",
"CsgRgfwgdCwhsssJBBwvcnQnQNMvQtQm",
"nrVbwgnSTSgSnrZpjpWWqmWNHlqqpV",
"BcBPhSdsDlHNtNlJNP",
"RLFCQLQRRsBDDcRdGDddhCRDfwzvSCnzrbfrMfMgznwwfbZv",
"HJLzLNwBNzNJLzBJztRGzQVnDgwsjbgwssZwnDZbDQ",
"PhvlSvvPfMRlDbDsggbSjQSg",
"mFfhMlMrfchvPPpFTPvMvPzLBHWRHJNtzJGzzHpzBtCC",
"FLsgSLzLswdFgLBbWZnJDWHcmZnnBjHM",
"rpbrrqfqpvCbqqQQvvpClblRDHmjmmjJJZZnWMJmmJmmcRMc",
"qTppQvCfhzSVVTzbdL",
"ThTJtlqfDrDtffwqRCFCCnLwdnmpzRdF",
"WPQSSFsGMgQZWvFQgZgZQcCdmmzLMLCpNzCCddmLzdzm",
"cvVPGPQQGsZsgGPjVFccbHhThJHhDqfhDDjHqDrr",
"CgnCCnPMnMtGHDbMFQ",
"zLpwpRTwwRwhRchHwmqmGvvGbqmTmNQqvq",
"sHdhzlwrRVrdLzRrprrfjgfjVBnBCfSBZZgPfJ",
"SPMdWwWPrZwdrrWrSPLFDfgbQDfwDFfFglDQ",
"qLGBtGLpjzqmvQbvvpDvfFpR",
"jhLqqHBLGjtLqSZCssSTZZMshP",
"MhJCpPDpRRFRzQQNNqbcZjNZmVhjNm",
"LLSlLnGDmNqLbNjb",
"sfBngrBSTTSnSGHlTsHBGsBpFFdRdQPDCFPWRMzzdQWM",
"ZQtmgtWfPcgPgcsb",
"pvMhFThpHVTvPbcFcFJLJDsd",
"MTVHchVVHjHHTcpjMVBjjnQnGqQZnlqBmrWQQBffQQ",
"HfcRNJpJfhCmpGSqqGNjsjBnQl",
"tTdPwwtLTrrTVPSnQsbGPsnnlFllFQ",
"VvvTSTwWMrSZVwwrrmRmczJchHcHCZhRzD",
"wfRwhmLRnvrHqHhV",
"bJlBHlWlHMBPJzDlzMMJJSBlFnrGVrqspGGvpVGPVpGsVqvp",
"DWdStDMztCCHgZCtmZ",
"MHdsznVDDfcjcjDcdDjmMSCQwQpCpFCvqSZQqFzQpQ",
"lhJnLJJnTNrWTRqvqqPrFwZvwqQp",
"NghhtJBtnWLRTNjmcMDtjdsMfGDH",
"jgsvPffVmHfDqPSrNwnQwnwNhSvw",
"PZbGbCdcGdRCGtntQLQQLLwtpLNw",
"RbcPFBRFcdZBBJDBmTHjsD",
"dTTFJdzhmmmQpzVz",
"jtNLcctGGjtfrnVMsNQNQVVWnv",
"GcrcrfLtDggLftDFhZFdJFHJBVFBgZ",
"TTbqTgqCqZCrwmhQnnmrgh",
"MhpfsMLhfmrznLrQrF",
"RsStRMtjpHMfDtWsWsNDppsqlZqBlhNlbcNdTPClPqcvBP",
"lRhZPgnpRGZlSrmsLSvSzLVl",
"wwHdHCfDQCJHdwdDMdHCcDsLmNVvzVsWrcVNcVzLbrLz",
"dMCCwCtJdwDQJMtjhnvhpPhRZBhR",
"pBqMZfDffmBnvnNmPt",
"rhwLHCChrLPCMNWMCNmW",
"GSMVRSVwHLMRJDQJTZlJZR",
"sfstzPGRRBSngMfQLNNqgWLQLZZNgq",
"scVDjjjCDTVhHlDhHdvvjwjHrZmWQmJmrJJWqNqLJbrcQqZq",
"VvHlVHldTjvhpVplhVThhwjlPFSzPfGzpGBnsRffRRBPPGGF",
"WNFNfnWTSLSJTnWShTvVZCnvrdPrZvddVCrt",
"QwsMjppcpHCPdHsvPZ",
"lcwMGgpcGbzQpMgQwbDjDQZSJTRfShffWNJSSNFFbhSb",
"JDNgTgqDTggQbQGbZDWbJmVJrPVfPjlPfPwlljJC",
"FZzHFSznZZtptHzcSmCVrwfPVcwwVrCcdm",
"nMSStvnZFSHpLLtBtMzHnMWQvNhgDgGNRGNhgqRWTgqg",
"SJcrhvbBLBLrDpllvnwHQRnllHnQ",
"ffsjfMMZfVdCCgCfgTzmzslRtwFwFtTnqqHTJRQnqRqq",
"CVPgmdggVjCJSrhrbrPrrSLW",
"LPtcLtgddLMRRCMRpTBRrZnppvvGRvBw",
"WNNJjDjqSjJSqWqzNqzlSlBTGGFvrppSrwTFpn",
"qbNDWNNHbJqVtctwVmsfLCLP",
"FvSSLMqgvVSQjQfgwpwWpj",
"BthszRPRRNbNtzmHRbHNRNPfwJGcsswWQpffJpfsJcQFwJ",
"bBtzPmRrbBRHtNCzPhqdCLFMLSSvdnvCTnML",
"VPHWJPDjVLDDjDSFDJhgdnNGdbblzTzNjlnNbl",
"ZprsRZMQwwmGZsvtQZgTfggqnbfdTzrbqlTd",
"GZMtsscmsRZswwBQHBhDDJJPPCPWSWCJ",
"mNDNNmmVMSVgGgGGqsqGLhQqsLGhLq",
"nZBTZpJPhCpnnrsqbbcfczJfFccz",
"HpBZZRPRHjnPPjrHnRtCZnBdShDVlMDNDgVmtmDdVDWSdN",
"tBftztmztGBBCBSGHBmhvHHcchbshhThpbLJHJ",
"wwzMrrMnQdldVdMvJTcLNnphphbLJv",
"ZzwPVrWQlwrdStGGCWqDSSGW",
"QwfrQPvhwPfzQrvWWpQpvVGGTDGsjbgNNcbfsGTsDFgG",
"CtddSdZMRRdnJhRnHtZtlRMbGGDjDgggjNTZDNgTGFgGjc",
"mdmdCnHhVWmLmwwL",
"zLcWSWFcPJLWrWLSZrJLjVjHtjVsrdtstHdtVQgg",
"nChlwwnmhlCNqhhjHMgDjVVdwMjdtd",
"CNnBmNNThhhdhCdlBGGlGvNpcJbJLSbcZzcFJzpJTWPbzc",
"LdPZTPVpLCVTtCNsNsfFnlDC",
"SMwqcqcWQMbMhWQzBnsNfsFwrnnNNlrs",
"WMMWhvQRNNNjvLgZ",
"DWFGzrtfsZHZZMLt",
"pNwNzNCNTpppmnvNMTLVjHLBLLjMRTLH",
"PPdlPmJJNNClDdcdDDfWhzrW",
"nSJVSHQQnwLThnhrML",
"ddsjfRdGZjmGjRTwwTZhwrMwWwtb",
"qCdfRdMmgssPfjsdjdPspBzQpScSSCBpzNBQzcQz",
"fJnmRMJrlrmRmTRmbqssWVdqNVQdswdNNb",
"GZggFHGhHHgHSFvtHPPPsfwgwNsVqjqNpNjNNssN",
"PPSPDDBPBmBMlLfmLr",
"BdqdCBqqCVPVTZBrlJcTcTJTcfcbwwmcgv",
"WjGGLzLMhpWQmRGhpHfbhcDhHHHhgcsbJD",
"tQzSGjWRzWBntntrZmVB",
"clfLQLgfzfTLDMwNrNrrNDGCGG",
"tmbpFtBvvmvdQQdFQwMJCG",
"SnbtnqnSbnQQsBqzgLgVsLZTLTPfVg",
"QnQBQQBVzqqzpmfgBpnqSDFPjhhWsFVhlsFFsDstFs",
"MGGrTHcvRTTrrrCDpjvWtFPlFlsvjp",
"bZbpTpJJBBQmBmJf",
"dNVgDdVtPcNPhgTLPLpTPlnTHHRn",
"WrvjvwjWwfwWjGJsrwBjQJjTQLbnSTTmpTRQSTClHTbLmn",
"JqWWGvBJBwGJfJJGvwqZZddFtDFhgDqZhHNM",
"VwJcNgbfvfJbfcmGLZfPhZLfZGTDhP",
"CnnrlBlprsBnzQFntnZLqDhZZqThWGtWWSPL",
"FllFdCjzlsCzjJNJGGJwHHVg",
"fTbVBmNJCJRVbTmbfJFHsDjQHDHQjnQRsvDn",
"cLWcrGtttddMPhrPhPtPrtzsnSQQBvHjFpFSpDHsMjnvjD",
"PrPgPdhGWLrrqgdqcVCffbNblBwfVmwqwC",
"gmBfbmlbBDqrdfrDcJ",
"PwVWrQphQWWhQsJFcMPqzDdcJq",
"QWCSSHpSQWCttQpCRCHNSlZBtrmBZTjvGgZjmBZjBn",
"JrnhMPvtVtPVHJGrBrQwTmQmRGGB",
"pSSZCFClCbbSLbljZlSlFFszzBwcZNwTzQNDmBwGTBNTBz",
"ldsCCjpFjCqdLgsFjpsLFQgtnfqtJvnMtnvhWnHHMnnVWV",
"hzNHzHjWNzwHjjhprpGvGgvGvvpv",
"PLBVVRPDLdrgCdMrdrdC",
"FmBTqTmLPrsFqTBDcTTVtNNJztqWQNQtWWtJqNNz",
"fFffFvFBgHQWHdvfGglBWbqbPSSbSwVntPhZwwbS",
"jJCMzNMCjNCLNMjjphPSPqhbqnwPZLSqZh",
"rNpJJDzpcNMzzdBnGcQTccBvgv",
"FRFMwsrzVtwstgbCHHJJPgNb",
"hfZGhZDnnTTHTCCNzJjH",
"hppDvznmZphZQVFQwFVWlRqFls",
"jrjrgdHdFBZsBlcCGghWNgpgbCCp",
"QwJJqQQMLwPTwLMMwzvzwwzhCWbvcNcCChWpchWbNGfFff",
"qqFQJTmwJSPjZsrlnBjdHm",
"QfffRppWfHpQSrWVpSGmGMMccSjBjmmGmc",
"qdzLvbwzwdsWwnFdBBcBhMjMDvBBcBhc",
"bPdZPqddqzFsZVRptZZQHVWNpN",
"BzBQQHNjTSzzJDDFZFgJDJ",
"qLvCnLpfCpqCnLJhntRglFncDrGrllmZFZlDrc",
"JpqvfhRhLddfpbbtsdJWjHSwHHTNSQNPTVHQTb",
"qVQCCVlQZWgHZMqgqWlrtScFwrmtmcJqSSsSJS",
"MzdnddpNLzhRpzbzNPPBbPScjcnmrwSFjSjSJFtrwjcF",
"ddTzRMPLdLbvhBRdLWGQClVVCWQZQDTGGf",
"DHHTsldDNdPnVDCRDCNHllHwcMpprSMpRmphhRWhrhmzSS",
"qJLBqQLvJLQgftgPjJrhrMMWSmWMmMrrSqrc",
"FjfFftgLBjJPBLQZGvvZtNClnTTNGCdHTbCCNsnslH",
"jHHNsNqhjsShsshdRRCDMfMbCWHBrGGC",
"TJQFmnpgmTpBDCgCMCDZCGDC",
"FwpQzwQTmVvwTJmFJzTcQSdhBNztNPNjSlqLhBNhSh",
"vBCfSDcRMfRcRHSRRZZtPwrWWNtdSmrNVGSdwm",
"gbLnTzqTbjhGqFzgWrtttQtrPQTtNPmP",
"zbhjzglgzzlBGcsflsCl",
"jNHDNNHjVGVDNQFDTQSFZzDQTd",
"vvLwhbnpvPPgClwnfFTmTZQgffFFtTfc",
"LrhrLvwrnJvhCHVVRZNMjsRJVB",
"ShfcBWfvdhhJBBVwCJjHTRNwRVNC",
"qQzlDqMDDDslPqGVLTNZVpPwTRZZpV",
"bgbDbsqzsDTcfrgFFdgg",
"vlRHvvHwvMMMTTlvjmRtBjSJmSnDnpdrpSSrJJnDQrLp",
"cPfCgZZzNzzcGhNszcTPNZLrnVSJpJhDrrhSSQSpDDQn",
"FbTgbGcgNgcFbPFHMqvjjRtjRWvFvt",
"fZTnqfFFDNglcjdjZcfLGQJBwrGGQwbGQTBBJz",
"VhvfvsPpWRChmphvRGBbBLGhSbLrBQBSwb",
"pCsCsHvsstPsfRMMMtmDqFjngdFZqDHFnNFFjl",
"PVVwffMlfGWMDDSwfDwVpRpsZRjBHgpSsjJSpBSp",
"TdnFbqTFdmbjctcqcbRBZtJJZgsBzBBzvgHJ",
"bNmbcqnnbNFLChCVCfjDfWlMjVDPCr",
"JBLLjBQccLLJhcBDDlSrdFDsVhrVsR",
"HgNWCgqWGbvCRRZvGWvZmszsSlrWdSdFrWzSldDF",
"qvGCZGHggRNHvGTgvLnBjpjjPJwTPjLcJj",
"GCGwQrwBZMZdGVdLzbqbbp",
"TRfTTCtgcDmhtDmsTDVSbvpLdNpzNVRqVdVL",
"CfDJjscgTcsjfhtFZljPZWZMWPlZjQ",
"WsrjjfRfjjZjwjWjBpDpVpVhMBsMMSBT",
"JgmqHnCHHPCCtCJgSZMgZppDTgzvzZMz",
"HCGCGqqqCtmnHnqLFHWjlFrWRRbfjZccNWrR",
"BJBfSfPLPvdhvrbbvpDsHgDTzgpdzgZpgN",
"cVcmRnCWCqGngHpZsZsTsqNN",
"jmGCVwWjjnWFMjGwcwmrLJbBJPbLSrPPTbFBTr",
"SPZmmtlmqjZlZMwhlrtggqGGcCLCpfGLgqdCqF",
"FBBVDVTVDJfgcddLCDdp",
"zzVHvVNTbWJJTTRbVWBFJbWHmwmSPlMjPSShjlhMhhrrml",
"GJZJZTsnhsDJtVZdtsZJZrBCQpLjQgBnrQgjCjQQQj",
"RPSfqcRShHbFcPSfBqLLprBCwrQQQCqg",
"zPzPRHbFPcRRRHPclMhSfvfZsJZVTTZsJNVMGWGVdGTWWD",
"lCZrCLWCwVllGzWPPBMTFpsbGdsTpsbNMgFb",
"RDjtjHcHjcHctDRtjnhtnHTgMqTMqhTbdbdZbgFqZdMN",
"vfDmvfjtmvtcHmjZfSRZHQzBLrVLCJLJLfJBPzVJlwPw",
"JMTHVZMWNSCwCwMS",
"nsddQbDCnQQdDBPdCQCSvwpDvwffhfSvpmppvp",
"BssqBFtqRHgTqVRC",
"cWTTthtrgrzpCdCddtpz",
"SSSLNJLGLSLfCJfJFQCJzQ",
"swMPMZVMMSlMSZMqVSSHznzcqgzWTHgTnhbnrr",
"RJjjgMjWShPqchtbVBPV",
"DDddwCnZMHLLvDnfLrvvbVbbBtpwVBVPwtVpbcbb",
"zrvnvLrlZCHrfZZLffHZHHTsTmsQgFQSFTMjjQlFTRmR",
"zhTTMLRVTzLbVqwVRJgDQQsSCgCDNgsZCpqp",
"rrmrBmmWrWnHjWnGWrnGnhDHSQgNSpQsCgSNgtNtDDHZ",
"fBrGPGmGPBcTMfLhJVTc",
"TbTCjTBSbCncHsDZDZPhZbzv",
"rMwplFdlWWJMJzhhpGtHtvHSSP",
"fMMfwWdWrNfJNdlVgMcTLTmLffjTqnLScCjL",
"SwhTllwJDwqqBWLBbNtfhjBB",
"mvllZMmRMZGFZRfctLWtWttzfNLR",
"MGvHMCGpVnFGlgvVFFnpnGmmsHrDJJdSsqPqJSqDJJdTTDqD",
"QTTcqJZJhHSpShhFpFzjDDwwsFzpdg",
"NBMnBvmBPvwrqvgvvqgD",
"bNNGmWmbbClQTQRqchhQbf"
};

static int calcLinePriority(const std::string& str)
{
    size_t cmprtIdx1 = 0;
    size_t cmprtIdx2 = str.size()/2;
    std::vector<char> itemsInBothCmprt;
    // figure out which item is in both compartments
    for (size_t i=cmprtIdx1; i<cmprtIdx2; ++i) {
        char item = str[i];
        for (size_t j=cmprtIdx2; j<str.size(); ++j) {
            if (item == str[j] &&
                (std::find(itemsInBothCmprt.begin(),itemsInBothCmprt.end(),item) ==
                    itemsInBothCmprt.end()))
            {
                itemsInBothCmprt.push_back(item);
                break;
            }
        }
    }
    assert(itemsInBothCmprt.size() == 1);
    if (itemsInBothCmprt[0] >= 'a' && itemsInBothCmprt[0] <= 'z') {
        return 26 - int('z' - itemsInBothCmprt[0]);
    }
    return 27 + int(itemsInBothCmprt[0] - 'A');
}

static int calcPrioritySum(const std::vector<std::string>& input)
{
    int sum = 0;
    for (const std::string& str : input)
    {
        sum += calcLinePriority(str);
    }
    return sum;
}

int main()
{
    if (calcPrioritySum(testInput) != 157) {
        printf("Test failed!\n");
        return 1;
    }
    printf("Test passed\n\n");

    printf("Priority Sum: %d\n", calcPrioritySum(input));
    return 0;
}

