// MNLIBPAOCLG$$GDKDCGFCBIH @ RVA 0x31E8BCC

void MNLIBPAOCLG__GDKDCGFCBIH(MNLIBPAOCLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  CocosAnimation_o **ppCVar2;
  CocosAnimation_o *y;
  
  if ((DAT_04566d7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d7c = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032e8c04 to 033e8c0b has its CatchHandler @ 032e8e24 */
  ppCVar2 = &(__this->fields).JFHJBGJOPME;
  y = *ppCVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 032e8c24 to 033e8c2b has its CatchHandler @ 032e8e20 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)0x0,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (*ppCVar2 != (CocosAnimation_o *)0x0) {
    if (((*ppCVar2)->fields)._JJCDMHFHJAB_k__BackingField != false) {
      return;
    }
    __this_00 = (__this->fields).BAKAPMIJMEN;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      *ppCVar2 = (CocosAnimation_o *)0x0;
                    /* try { // try from 032e8c6c to 033e8c8f has its CatchHandler @ 032e8dfc */
      thunk_FUN_01c20e04(ppCVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

