// IAGNPGHOAIC$$CIIONFHFKGB @ RVA 0x332294C

System_String_array * IAGNPGHOAIC__CIIONFHFKGB(IAGNPGHOAIC_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_AssetBundle_o *__this_00;
  System_String_array *pSVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567857 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04567857 = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).IMJGDBPFCLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields).IMJGDBPFCLJ;
    if (__this_00 != (UnityEngine_AssetBundle_o *)0x0) {
      pSVar2 = UnityEngine_AssetBundle__GetAllAssetNames(__this_00,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034229e4 to 03522b2b has its CatchHandler @ 034229e4
                       catch() { ... } // from try @ 034229e4 with catch @ 034229e4
                       catch() { ... } // from try @ 03422b7c with catch @ 034229e4
                       catch() { ... } // from try @ 034232b8 with catch @ 034229e4
                       catch() { ... } // from try @ 034232ec with catch @ 034229e4
                       catch() { ... } // from try @ 0342331c with catch @ 034229e4 */
  pSVar2 = (System_String_array *)FUN_01bab718(string___TypeInfo,0);
  return pSVar2;
}

