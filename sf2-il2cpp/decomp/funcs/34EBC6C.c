// OLKKAIFGGAK$$AHNAGGGOLBK @ RVA 0x34EBC6C

void OLKKAIFGGAK__AHNAGGGOLBK(OLKKAIFGGAK_o *__this,JNIHOEBPIND_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  int32_t CLLGDGGKIPC;
  int32_t iVar2;
  System_Object_array *args;
  long lVar3;
  JMDPBFOCHHP_o *__this_00;
  JMDPBFOCHHP_HJLEKMDIDPO_o *pJVar4;
  undefined8 uVar5;
  MethodInfo *in_x3;
  uint32_t ABKNPBMGHKH;
  PJKHAJKEHEL_o *pPVar6;
  Il2CppObject *pIVar7;
  undefined4 local_34;
  
                    /* try { // try from 035ebc78 to 036ebc7b has its CatchHandler @ 035ebc84 */
                    /* try { // try from 035ebc7c to 036ebc9f has its CatchHandler @ 035ebb64 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ebc2c with catch @ 035ebc80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ebc78 with catch @ 035ebc84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035ebc0c with catch @ 035ebc88
                        */
  if ((DAT_04568794 & 1) == 0) {
                    /* try { // try from 035ebca0 to 036ebca3 has its CatchHandler @ 035ebcd8 */
    FUN_01bab630(&ADGIHFGIFHO_TypeInfo);
                    /* try { // try from 035ebca4 to 036ebce7 has its CatchHandler @ 035ebb64 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
                    /* catch() { ... } // from try @ 035ebca0 with catch @ 035ebcd8 */
    FUN_01bab630(&StringLiteral_2236);
    DAT_04568794 = 1;
  }
                    /* try { // try from 035ebce8 to 036ebcef has its CatchHandler @ 035ebd04 */
                    /* try { // try from 035ebcf0 to 036ebcfb has its CatchHandler @ 035ebb64 */
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
                    /* try { // try from 035ebcfc to 036ebd03 has its CatchHandler @ 035ebd04 */
  if ((CPECAEHDDDB == (JNIHOEBPIND_o *)0x0) || (args == (System_Object_array *)0x0)) {
LAB_035ebebc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = *(Il2CppObject **)&(CPECAEHDDDB->fields).HCNMEPDPNKC;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035ebce8 with catch @ 035ebd04
                       catch(type#2 @ 00000000) { ... } // from try @ 035ebcfc with catch @ 035ebd04
                        */
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar7,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_035ebec4:
    uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar5,0);
  }
  if ((int)args->max_length == 0) {
LAB_035ebec0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  args->m_Items[0] = pIVar7;
  thunk_FUN_01c20e04(args->m_Items,pIVar7);
  local_34 = *(undefined4 *)&(CPECAEHDDDB->fields).super.field_0x34;
  pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (lVar3 = thunk_FUN_01bda71c(pIVar7,(((args->obj).klass)->_1).element_class), lVar3 == 0))
  goto LAB_035ebec4;
  if ((uint)args->max_length < 2) goto LAB_035ebec0;
  args->m_Items[1] = pIVar7;
  thunk_FUN_01c20e04(args->m_Items + 1,pIVar7);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogFormat(StringLiteral_2236,args,(MethodInfo *)0x0);
  ABKNPBMGHKH = *(uint32_t *)&(CPECAEHDDDB->fields).super.field_0x34;
  CLLGDGGKIPC = CMCJGLAABFO__ENNCOIHDFKP
                          (0,*(System_String_o **)&(CPECAEHDDDB->fields).HCNMEPDPNKC,
                           (MethodInfo *)0x0);
  OLKKAIFGGAK__EIKAGLCDFLF(__this,CLLGDGGKIPC,0,in_x3);
  if (CLLGDGGKIPC == 0xd) {
    pPVar6 = (__this->fields).FAPMJJBOFEF;
    if (pPVar6 != (PJKHAJKEHEL_o *)0x0) {
      bVar1 = (ADGIHFGIFHO_TypeInfo->_2).naturalAligment;
      if (((bVar1 <= (pPVar6->klass->_2).naturalAligment) &&
          ((pPVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
           (Il2CppClass *)ADGIHFGIFHO_TypeInfo)) && (pPVar6[1].klass != (PJKHAJKEHEL_c *)0x0)) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if ((pPVar6[1].klass == (PJKHAJKEHEL_c *)0x0) || (__this_00 == (JMDPBFOCHHP_o *)0x0))
        goto LAB_035ebebc;
        pJVar4 = JMDPBFOCHHP__FPPDGOEOJCH
                           (__this_00,(System_String_o *)((pPVar6[1].klass)->_1).namespaze,
                            (MethodInfo *)0x0);
        if (pJVar4 != (JMDPBFOCHHP_HJLEKMDIDPO_o *)0x0) {
          ABKNPBMGHKH = (pJVar4->fields).JDPEHPMKDIF;
          iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (__this->fields).MPABKLDPGLA.fields,(MethodInfo *)0x0);
          if (0 < iVar2) goto LAB_035ebe98;
        }
      }
    }
    OLKKAIFGGAK__EIKAGLCDFLF(__this,0xd,0x1e,in_x3);
  }
  else {
LAB_035ebe98:
    OLKKAIFGGAK__OKNDBGGHBGI(__this,CLLGDGGKIPC,ABKNPBMGHKH,in_x3);
  }
  return;
}

