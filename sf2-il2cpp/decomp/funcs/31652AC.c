// GALHNMPIEHA$$DBENAIKIEEI @ RVA 0x31652AC

int64_t GALHNMPIEHA__DBENAIKIEEI(GALHNMPIEHA_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  JMDPBFOCHHP_o *pJVar2;
  System_Func_BDMABHJEEGD__bool__o **ppSVar3;
  BDMABHJEEGD_o *JOBNGBCPEGO;
  int64_t iVar4;
  NFFDIPBFJHP_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  BPBGAAHBFKH_o *pBVar6;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar7;
  ulong val2;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *source;
  System_Func_BDMABHJEEGD__bool__o *predicate;
  
  if ((DAT_045668b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BDMABHJEEGD,_bool>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_GALHNMPIEHA_<>c_OAMILOOFILJ__);
    FUN_01bab630(&GALHNMPIEHA_<>c_TypeInfo);
    DAT_045668b9 = 1;
    method = extraout_x1;
  }
  pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
  if ((pBVar6 == (BPBGAAHBFKH_o *)0x0) ||
     ((pBVar6->fields).IGPJEDLPAGI ==
      (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0)) {
                    /* try { // try from 03265448 to 03365457 has its CatchHandler @ 032669cc */
                    /* try { // try from 03265458 to 03365593 has its CatchHandler @ 03263c08 */
    return 0x7fffffff;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar2 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar7 = (pJVar2->fields)._IGLEEEJGEEJ_k__BackingField,
      pJVar7 != (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) &&
     (pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField, pBVar6 != (BPBGAAHBFKH_o *)0x0)) {
    val2 = (ulong)(pJVar7->fields).BLGKNLLKCKM;
    source = (pBVar6->fields).IGPJEDLPAGI;
                    /* try { // try from 03265374 to 0336539b has its CatchHandler @ 03266b4c */
    if ((GALHNMPIEHA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    predicate = GALHNMPIEHA_<>c_TypeInfo->static_fields->__9__32_1;
    if (predicate == (System_Func_BDMABHJEEGD__bool__o *)0x0) {
      if ((GALHNMPIEHA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = (System_Func_BDMABHJEEGD__bool__o *)
                  thunk_FUN_01bda818(System_Func<BDMABHJEEGD,_bool>_TypeInfo);
                    /* try { // try from 032653d0 to 033653fb has its CatchHandler @ 03266b48 */
      System_Func<object,_bool>___ctor();
      ppSVar3 = &GALHNMPIEHA_<>c_TypeInfo->static_fields->__9__32_1;
      *ppSVar3 = predicate;
      thunk_FUN_01c20e04(ppSVar3,predicate);
    }
    JOBNGBCPEGO = (BDMABHJEEGD_o *)
                  System_Linq_Enumerable__FirstOrDefault<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__bool__o *)predicate,
                             Method_System_Linq_Enumerable_FirstOrDefault<BDMABHJEEGD>__);
    if (JOBNGBCPEGO == (BDMABHJEEGD_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar5 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar5 == (NFFDIPBFJHP_o *)0x0) goto LAB_032654c8;
      if ((pNVar5->fields).NEACDFLBNFO == (GLPEFEEGCPM_o *)0x0) {
        return val2;
      }
      iVar1 = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
      if (iVar1 < 1) {
        return val2;
      }
      iVar1 = NFFDIPBFJHP__MHAFJGEAOIF((MethodInfo *)0x0);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
      iVar4 = (int64_t)iVar1;
    }
    else {
      iVar4 = GALHNMPIEHA__FGJMKHPILFH(JOBNGBCPEGO,method_00);
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Math_TypeInfo);
      }
    }
                    /* try { // try from 03265434 to 03365447 has its CatchHandler @ 03266b50 */
    iVar4 = System_Math__Min(iVar4,val2,(MethodInfo *)0x0);
    return iVar4;
  }
LAB_032654c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

