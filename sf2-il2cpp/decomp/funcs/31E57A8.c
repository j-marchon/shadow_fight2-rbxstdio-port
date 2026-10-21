// PNGKLCHKPEO$$.ctor @ RVA 0x31E57A8

void PNGKLCHKPEO___ctor(PNGKLCHKPEO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar1;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  PNGKLCHKPEO_LGAFLKDKBPL_o **ppPVar4;
  FKGKLILLOBG_o *pFVar5;
  FKGKLILLOBG_o **ppFVar6;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d5b & 1) == 0) {
    FUN_01bab630(&FKGKLILLOBG_TypeInfo);
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    DAT_04566d5b = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).EFNHMHALHPE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
  ppSVar2 = &(__this->fields).PCHEGEBOKAF;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).JPJMGEPBOOP;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  pPVar3 = (PNGKLCHKPEO_LGAFLKDKBPL_o *)thunk_FUN_01bda818(PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
  PNGKLCHKPEO_LGAFLKDKBPL___ctor(pPVar3,(MethodInfo *)0x0);
  ppPVar4 = &(__this->fields).BEMCNJHEADJ;
  *ppPVar4 = pPVar3;
  thunk_FUN_01c20e04(ppPVar4,pPVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GCOJOACAHJA = false;
  (__this->fields).LOAFPIOGJAF = 0;
  (__this->fields).AKBDFFLEINL = 0;
  (__this->fields).JNLOFJLAOFM = 0;
  pFVar5 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar5,0.0,(MethodInfo *)0x0);
  ppFVar6 = &(__this->fields).PHBEOHIEDOP;
  *ppFVar6 = pFVar5;
  thunk_FUN_01c20e04(ppFVar6,pFVar5);
  pFVar5 = (FKGKLILLOBG_o *)thunk_FUN_01bda818(FKGKLILLOBG_TypeInfo);
  FKGKLILLOBG___ctor(pFVar5,0.0,(MethodInfo *)0x0);
  ppFVar6 = &(__this->fields).KIFDEDHNJCA;
  *ppFVar6 = pFVar5;
  thunk_FUN_01c20e04(ppFVar6,pFVar5);
  return;
}

