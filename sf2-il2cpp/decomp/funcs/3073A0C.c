// BMBCEECINLK$$.ctor @ RVA 0x3073A0C

void BMBCEECINLK___ctor(BMBCEECINLK_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  CNDPAJOLKFN_o **ppCVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04565f92 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04565f92 = 1;
  }
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)pCVar1,0.0,0.0,(MethodInfo *)0x0);
  (pCVar1->fields).PPOPAMHBMGG = 0.0;
  (pCVar1->fields).super.OHHDBINAJCB = 0.0;
  (pCVar1->fields).super.JOLEIODMLFL = 0.0;
  (__this->fields).MCCCKHBAMIK = pCVar1;
  thunk_FUN_01c20e04(&__this->fields,pCVar1);
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  PKHLGDMJPMF___ctor((PKHLGDMJPMF_o *)pCVar1,0.0,0.0,(MethodInfo *)0x0);
  (pCVar1->fields).PPOPAMHBMGG = 0.0;
  (pCVar1->fields).super.OHHDBINAJCB = 0.0;
  (pCVar1->fields).super.JOLEIODMLFL = 0.0;
  ppCVar2 = &(__this->fields).OCOEMEDJAIM;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  fVar4 = 1.0 / (float)DFIBGGDJPLM;
  fVar3 = -fVar4 / (float)DFIBGGDJPLM;
  (__this->fields).JCIDLNABHMN = DFIBGGDJPLM;
  (__this->fields).BLOKLBJAKHF = fVar3;
  (__this->fields).NECHGFKBACK = -fVar3 - fVar3;
  (__this->fields).GBLGEHNKFEN = fVar4 + fVar4;
  return;
}

