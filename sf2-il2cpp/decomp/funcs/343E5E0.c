// OPNMPAJKDMI$$.ctor @ RVA 0x343E5E0

void OPNMPAJKDMI___ctor(OPNMPAJKDMI_o *__this,HOOAAGABMBL_o *PLJKGEJHILJ,ACHLOMELAJE_o *BHENDAGDGME,
                       NCNJEIBHGBH_o *GMFEBFOGDAA,MethodInfo *method)

{
  AJDHCLBLGMI_o *pAVar1;
  ACHLOMELAJE_o **ppAVar2;
  NCNJEIBHGBH_o **ppNVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._BODPEKDENEG_k__BackingField = PLJKGEJHILJ;
  thunk_FUN_01c20e04(&__this->fields,PLJKGEJHILJ);
  if ((PLJKGEJHILJ != (HOOAAGABMBL_o *)0x0) && (BHENDAGDGME != (ACHLOMELAJE_o *)0x0)) {
    pAVar1 = ACHLOMELAJE__IPJLBFKFOOD
                       (BHENDAGDGME,(PLJKGEJHILJ->fields)._COIPKAKHDFP_k__BackingField,
                        (MethodInfo *)0x0);
    (__this->fields)._FBNKBJAJBJF_k__BackingField = pAVar1;
    thunk_FUN_01c20e04();
    ppAVar2 = &(__this->fields).FOJBBDCJDFH;
    *ppAVar2 = BHENDAGDGME;
    thunk_FUN_01c20e04(ppAVar2,BHENDAGDGME);
    ppNVar3 = &(__this->fields).ILLNDILEKAM;
    *ppNVar3 = GMFEBFOGDAA;
    thunk_FUN_01c20e04(ppNVar3,GMFEBFOGDAA);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

