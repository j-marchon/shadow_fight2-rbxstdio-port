// GALHNMPIEHA$$IAKHIFOFLGO @ RVA 0x3165A44

void GALHNMPIEHA__IAKHIFOFLGO(GALHNMPIEHA_o *__this,MethodInfo *method)

{
  long lVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Il2CppObject *pIVar2;
  KKLJIDJBFEI_o *__this_01;
  PGICCMFLDPI_o *pPVar3;
  JMDPBFOCHHP_o *pJVar4;
  Il2CppObject *arg1;
  Il2CppObject *arg2;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  BPBGAAHBFKH_o *pBVar6;
  JMDPBFOCHHP_NMAJABPDEPE_o *pJVar7;
  int index;
  long lVar8;
  ulong uVar9;
  long local_60;
  long local_58;
  ulong local_48;
  
                    /* try { // try from 03265a68 to 03365a8f has its CatchHandler @ 03266834 */
  if ((DAT_045668b6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    FUN_01bab630(&StringLiteral_17509);
                    /* try { // try from 03265ac4 to 03365aef has its CatchHandler @ 03266830 */
    FUN_01bab630(&StringLiteral_6104);
    DAT_045668b6 = 1;
  }
  if (((__this->fields).HDPCPPJGGCI != false) ||
     (pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField, pBVar6 == (BPBGAAHBFKH_o *)0x0)) {
    return;
  }
  index = 0;
  while (__this_00 = (pBVar6->fields).IGPJEDLPAGI,
        __this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* try { // try from 03265b24 to 03365b2f has its CatchHandler @ 03266820 */
    if ((__this_00->fields).count <= index) {
      return;
    }
                    /* try { // try from 03265b30 to 03365c6b has its CatchHandler @ 03263c08 */
    pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                        Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_get_Item__);
    if (pIVar2 == (Il2CppObject *)0x0) break;
    if (pIVar2[2].monitor != (void *)0x0) {
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if ((__this_01 == (KKLJIDJBFEI_o *)0x0) ||
         (pPVar3 = KKLJIDJBFEI__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0),
         pPVar3 == (PGICCMFLDPI_o *)0x0)) break;
      uVar9 = (pPVar3->fields).GDKPGIBMFPA;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if (((pJVar4 == (JMDPBFOCHHP_o *)0x0) ||
          (pJVar7 = (pJVar4->fields)._IGLEEEJGEEJ_k__BackingField,
          pJVar7 == (JMDPBFOCHHP_NMAJABPDEPE_o *)0x0)) || (pIVar2[2].monitor == (void *)0x0)) break;
      lVar8 = *(long *)((long)pIVar2[2].monitor + 0x18);
      lVar1 = lVar8 + (ulong)((pJVar7->fields).BLGKNLLKCKM * 1000);
      if (lVar1 < (long)uVar9) {
        local_48 = uVar9;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_48);
        local_58 = lVar8;
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_58);
        local_60 = lVar1;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_60);
        pSVar5 = System_String__Format(StringLiteral_17509,pIVar2,arg1,arg2,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar5 = System_String__Concat(pSVar5,StringLiteral_6104,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03265c6c to 03365c93 has its CatchHandler @ 032669c8 */
        local_48 = local_48 & 0xffffffff00000000;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_48);
        GALHNMPIEHA__AHBFKHIEEEI(__this,pIVar2,method_00);
        return;
      }
    }
    pBVar6 = (__this->fields)._MBJGPIOFAEE_k__BackingField;
    index = index + 1;
    if (pBVar6 == (BPBGAAHBFKH_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

