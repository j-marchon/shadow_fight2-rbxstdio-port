// PICIKPNGDBE$$.ctor @ RVA 0x35C35A0

void PICIKPNGDBE___ctor(PICIKPNGDBE_o *__this,MethodInfo *method)

{
  NILLKLHKLHG_o *pNVar1;
  NILLKLHKLHG_o **ppNVar2;
  
                    /* try { // try from 036c35bc to 037c35c3 has its CatchHandler @ 036c3664 */
  if ((DAT_04568f50 & 1) == 0) {
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    DAT_04568f50 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._BIOJBFDLNNA_k__BackingField = 0.0;
  (__this->fields)._IJMLJAMCGPF_k__BackingField = 0.0;
  (__this->fields)._LEIDJIGJIAE_k__BackingField = true;
  (__this->fields)._DONOGHEAFON_k__BackingField = true;
  pNVar1 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
  NILLKLHKLHG___ctor(pNVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._ADDLOEHIBFF_k__BackingField;
  *ppNVar2 = pNVar1;
                    /* try { // try from 036c360c to 037c3627 has its CatchHandler @ 036c3660 */
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  pNVar1 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
  NILLKLHKLHG___ctor(pNVar1,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._LHLFLPOLGDI_k__BackingField;
  *ppNVar2 = pNVar1;
                    /* try { // try from 036c3628 to 037c364b has its CatchHandler @ 036c34ec */
  thunk_FUN_01c20e04(ppNVar2,pNVar1);
  return;
}

