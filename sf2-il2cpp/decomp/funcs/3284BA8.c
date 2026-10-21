// OOMHDDBCBJP$$LLCONNGHGKD @ RVA 0x3284BA8

void OOMHDDBCBJP__LLCONNGHGKD(OOMHDDBCBJP_o *__this,int64_t LFJGFLNMBMC,MethodInfo *method)

{
  int64_t extraout_x1;
  
  if ((DAT_045672ad & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_3430);
    DAT_045672ad = 1;
    LFJGFLNMBMC = extraout_x1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,LFJGFLNMBMC);
  }
  UnityEngine_Debug__LogError(StringLiteral_3430,(MethodInfo *)0x0);
  return;
}

