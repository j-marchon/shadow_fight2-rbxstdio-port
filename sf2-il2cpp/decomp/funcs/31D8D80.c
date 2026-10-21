// DBGBHDDCAJC$$NOEJODPMGEB @ RVA 0x31D8D80

void DBGBHDDCAJC__NOEJODPMGEB(DBGBHDDCAJC_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  int32_t local_14;
  
  if ((DAT_04566d02 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DBGBHDDCAJC_FODCLBHAEAG_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10633);
    DAT_04566d02 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).JDNKKGPNHPB;
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      MGNPHCAAEIO_TypeInfo->static_fields->ONPPMIJCMPH = true;
    }
    else if (iVar1 == 2) {
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
      }
      MGNPHCAAEIO_TypeInfo->static_fields->NJDGNMENDPI = true;
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
                    /* try { // try from 032d8e68 to 033d8e6f has its CatchHandler @ 032d8fac */
      local_14 = (__this->fields).JDNKKGPNHPB;
                    /* try { // try from 032d8e7c to 033d8e8f has its CatchHandler @ 032d9014 */
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(DBGBHDDCAJC_FODCLBHAEAG_TypeInfo,&local_14);
      if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d8ef8 to 033d8eff has its CatchHandler @ 032d8fa8 */
        FUN_01bab8c8();
      }
                    /* try { // try from 032d8e90 to 033d8ef7 has its CatchHandler @ 032d8d54 */
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar2;
      thunk_FUN_01c20e04(args->m_Items,pIVar2);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10633,args,(MethodInfo *)0x0);
    }
  }
  return;
}

