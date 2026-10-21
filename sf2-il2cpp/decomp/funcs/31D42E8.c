// MANCHAFDGGG$$.ctor @ RVA 0x31D42E8

void MANCHAFDGGG___ctor(MANCHAFDGGG_o *__this,MethodInfo *method)

{
  NILLKLHKLHG_o *__this_00;
  NILLKLHKLHG_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566ccc & 1) == 0) {
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_04566ccc = 1;
    method = extraout_x1;
  }
  __this_00 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo,method);
  NILLKLHKLHG___ctor(__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).MBEHOEALEMP;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
  return;
}

