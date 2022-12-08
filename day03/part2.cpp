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

static int calcElfGroupPriority(
    const std::string& str1,
    const std::string& str2,
    const std::string& str3)
{
    char itemInAll3 = '!';
    bool running = true;
    for (size_t i=0; i<str1.size() && running; ++i) {
        for (size_t j=0; j<str2.size() && running; ++j) {
            for (size_t k=0; k<str3.size() && running; ++k) {
                if ((str1[i] == str2[j]) &&
                    (str2[j] == str3[k]))
                {
                    itemInAll3 = str1[i];
                    running = false;
                }
            }
        }
    }
    assert(itemInAll3 != '!');
    if (itemInAll3 >= 'a' && itemInAll3 <= 'z') {
        return 26 - int('z' - itemInAll3);
    }
    return 27 + int(itemInAll3 - 'A');
}

static int calcPrioritySum(const std::vector<std::string>& input)
{
    int sum = 0;
    assert(input.size()%3 == 0);
    for (size_t i=0; i<input.size(); i+= 3)
    {
        sum += calcElfGroupPriority(
            input[i+0],
            input[i+1],
            input[i+2]
        );
    }
    return sum;
}

int main()
{
    if (calcPrioritySum(testInput) != 70) {
        printf("Test failed!\n");
        return 1;
    }
    printf("Test passed\n\n");

    printf("Priority Sum: %d\n", calcPrioritySum(input));
    return 0;
}

