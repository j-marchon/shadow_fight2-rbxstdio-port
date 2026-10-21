// ECENNHNBAME.HJPFANEPGJF.FFGJMEOGPEA$$.ctor @ RVA 0x301AB0C

void ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA___ctor
               (ECENNHNBAME_HJPFANEPGJF_FFGJMEOGPEA_o *__this,MethodInfo *method)

{
  PNGKLCHKPEO_o *pPVar1;
  PNGKLCHKPEO_o **ppPVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c08 & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    DAT_04565c08 = 1;
    method = extraout_x1;
  }
  pPVar1 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo,method);
  PNGKLCHKPEO___ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).DBNCGNGNGNM;
  *ppPVar2 = pPVar1;
  thunk_FUN_01c20e04(ppPVar2,pPVar1);
  pPVar1 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
  PNGKLCHKPEO___ctor(pPVar1,(MethodInfo *)0x0);
  ppPVar2 = &(__this->fields).OCNJNIOMPMJ;
  *ppPVar2 = pPVar1;
  thunk_FUN_01c20e04(ppPVar2,pPVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

