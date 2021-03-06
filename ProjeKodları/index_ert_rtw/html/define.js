function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:23,type:"var"};
this.def["OverrunFlag"] = {file: "ert_main_c.html",line:24,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:25,type:"fcn"};
this.def["stopRequested"] = {file: "ert_main_c.html",line:53,type:"var"};
this.def["main"] = {file: "ert_main_c.html",line:54,type:"fcn"};
this.def["index_B"] = {file: "index_c.html",line:24,type:"var"};
this.def["index_DW"] = {file: "index_c.html",line:27,type:"var"};
this.def["index_M_"] = {file: "index_c.html",line:30,type:"var"};
this.def["index_M"] = {file: "index_c.html",line:31,type:"var"};
this.def["SystemProp_matlabCodegenSetAnyP"] = {file: "index_c.html",line:37,type:"fcn"};
this.def["matlabCodegenHandle_matlabCodeg"] = {file: "index_c.html",line:44,type:"fcn"};
this.def["index_step"] = {file: "index_c.html",line:55,type:"fcn"};
this.def["index_initialize"] = {file: "index_c.html",line:187,type:"fcn"};
this.def["index_terminate"] = {file: "index_c.html",line:264,type:"fcn"};
this.def["B_index_T"] = {file: "index_h.html",line:89,type:"type"};
this.def["DW_index_T"] = {file: "index_h.html",line:107,type:"type"};
this.def["soHCSR04Sonar_index_T"] = {file: "index_types_h.html",line:27,type:"type"};
this.def["P_index_T"] = {file: "index_types_h.html",line:32,type:"type"};
this.def["RT_MODEL_index_T"] = {file: "index_types_h.html",line:35,type:"type"};
this.def["index_P"] = {file: "index_data_c.html",line:20,type:"var"};
this.def["chunk_T"] = {file: "multiword_types_h.html",line:23,type:"type"};
this.def["uchunk_T"] = {file: "multiword_types_h.html",line:24,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
this.def["rtDataTypeSizes"] = {file: "index_dt_h.html",line:19,type:"var"};
this.def["rtDataTypeNames"] = {file: "index_dt_h.html",line:38,type:"var"};
this.def["rtBTransitions"] = {file: "index_dt_h.html",line:57,type:"var"};
this.def["rtBTransTable"] = {file: "index_dt_h.html",line:71,type:"var"};
this.def["rtPTransitions"] = {file: "index_dt_h.html",line:77,type:"var"};
this.def["rtPTransTable"] = {file: "index_dt_h.html",line:92,type:"var"};
this.def["getLoopbackIP"] = {file: "MW_target_hardware_resources_h.html",line:12,type:"var"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["index_c.html"] = "../index.c";
	this.html2Root["index_c.html"] = "index_c.html";
	this.html2SrcPath["index_h.html"] = "../index.h";
	this.html2Root["index_h.html"] = "index_h.html";
	this.html2SrcPath["index_private_h.html"] = "../index_private.h";
	this.html2Root["index_private_h.html"] = "index_private_h.html";
	this.html2SrcPath["index_types_h.html"] = "../index_types.h";
	this.html2Root["index_types_h.html"] = "index_types_h.html";
	this.html2SrcPath["index_data_c.html"] = "../index_data.c";
	this.html2Root["index_data_c.html"] = "index_data_c.html";
	this.html2SrcPath["multiword_types_h.html"] = "../multiword_types.h";
	this.html2Root["multiword_types_h.html"] = "multiword_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["index_dt_h.html"] = "../index_dt.h";
	this.html2Root["index_dt_h.html"] = "index_dt_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","index_c.html","index_h.html","index_private_h.html","index_types_h.html","index_data_c.html","multiword_types_h.html","rtwtypes_h.html","index_dt_h.html","rtmodel_h.html","MW_target_hardware_resources_h.html"];
