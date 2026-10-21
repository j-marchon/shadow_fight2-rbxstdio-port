// IJCLCKIJJDH$$.ctor @ RVA 0x3530B70

void IJCLCKIJJDH___ctor(IJCLCKIJJDH_o *__this,
                       System_Collections_Generic_IEnumerable_MFBFOBDKLBC__o *DFCKGCHLPGK,
                       AAPGCAPGBLG_o *BMIPCIOPBJB,HCOEEOMMEFL_o *OCOJHGNMOPJ,
                       CFEJGBOOCOG_o *DJPFIPHFNKC,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *pSVar1;
  AAPGCAPGBLG_o **ppAVar2;
  HCOEEOMMEFL_o **ppHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  CFEJGBOOCOG_o **ppCVar4;
  
  method_00 = (MethodInfo *)DFCKGCHLPGK;
  if ((DAT_04568a57 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MFBFOBDKLBC>__);
    DAT_04568a57 = 1;
    method_00 = extraout_x1;
  }
  IJCLCKIJJDH___ctor(__this,method_00);
  pSVar1 = System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)DFCKGCHLPGK,
                      Method_System_Linq_Enumerable_ToList<MFBFOBDKLBC>__);
  (__this->fields).LMGNEEPGCDN = (System_Collections_Generic_List_MFBFOBDKLBC__o *)pSVar1;
  thunk_FUN_01c20e04();
  ppAVar2 = &(__this->fields).APEEANDPFCG;
  *ppAVar2 = BMIPCIOPBJB;
  thunk_FUN_01c20e04(ppAVar2,BMIPCIOPBJB);
  ppHVar3 = &(__this->fields).GLNMNHFKGCO;
  *ppHVar3 = OCOJHGNMOPJ;
  thunk_FUN_01c20e04(ppHVar3,OCOJHGNMOPJ);
  ppCVar4 = &(__this->fields).AJAPLLENPMB;
  *ppCVar4 = DJPFIPHFNKC;
  thunk_FUN_01c20e04(ppCVar4,DJPFIPHFNKC);
  return;
}

