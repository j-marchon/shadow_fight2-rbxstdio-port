// CNIGOFCKBGI$$PKEKLILIONG @ RVA 0x31B5460

int32_t CNIGOFCKBGI__PKEKLILIONG(CNIGOFCKBGI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  System_Enum_o local_38;
  int local_28;
  
  if ((DAT_04566bae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HEDFKJBDBFN_TypeInfo);
    FUN_01bab630(&StringLiteral_7429);
    DAT_04566bae = 1;
  }
  local_28 = (__this->fields).JGJNBILDCHK;
  if (local_28 == 2) {
    iVar2 = 1;
    if ((__this->fields).EGBPMNKKPFI == false) {
      iVar2 = 2;
    }
  }
  else if (local_28 == 1) {
    iVar2 = 1;
    if ((__this->fields).EGBPMNKKPFI != false) {
      iVar2 = 2;
    }
  }
  else {
                    /* try { // try from 032b54e8 to 033b54ef has its CatchHandler @ 032b55b0 */
    local_38.klass = (System_Enum_c *)HEDFKJBDBFN_TypeInfo;
    local_38.monitor = (void *)0xffffffffffffffff;
    pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
                    /* try { // try from 032b5510 to 033b5513 has its CatchHandler @ 032b559c */
                    /* try { // try from 032b5514 to 033b5523 has its CatchHandler @ 032b55ac */
    pSVar1 = System_String__Concat(StringLiteral_7429,pSVar1,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
    iVar2 = 3;
  }
                    /* try { // try from 032b5554 to 033b5563 has its CatchHandler @ 032b55a8 */
  return iVar2;
}

