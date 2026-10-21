// PNGKLCHKPEO$$.ctor @ RVA 0x31E6C30

void PNGKLCHKPEO___ctor(PNGKLCHKPEO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *pSVar1;
  System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o **ppSVar2;
  PNGKLCHKPEO_LGAFLKDKBPL_o *pPVar3;
  PNGKLCHKPEO_LGAFLKDKBPL_o **ppPVar4;
  PNGKLCHKPEO_c *pPVar5;
  
  if ((DAT_04566d65 & 1) == 0) {
    FUN_01bab630(&PNGKLCHKPEO_LGAFLKDKBPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
    DAT_04566d65 = 1;
  }
  pSVar1 = (System_Collections_Generic_List_PNGKLCHKPEO_PLCIDMPOECL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PNGKLCHKPEO_PLCIDMPOECL>_TypeInfo);
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
  pPVar5 = __this->klass;
  (__this->fields).GCOJOACAHJA = false;
  (__this->fields).LOAFPIOGJAF = 0;
  (__this->fields).AKBDFFLEINL = 0;
  (__this->fields).JNLOFJLAOFM = 0;
                    /* WARNING: Could not recover jumptable at 0x032e6d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pPVar5->vtable)._4_EOHMFJFFFIN.methodPtr)
            (__this,AHDGNOJPPIB,(pPVar5->vtable)._4_EOHMFJFFFIN.method);
  return;
}

