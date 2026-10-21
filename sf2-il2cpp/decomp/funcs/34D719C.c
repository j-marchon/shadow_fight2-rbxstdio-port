// LCNCCGOAJBL$$.cctor @ RVA 0x34D719C

void LCNCCGOAJBL___cctor(MethodInfo *method)

{
  LCNCCGOAJBL_StaticFields *pLVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  
  if ((DAT_045686dc & 1) == 0) {
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    DAT_045686dc = 1;
  }
  pLVar1 = LCNCCGOAJBL_TypeInfo->static_fields;
  pLVar1->FEBKHIENJBN = -1;
  ppSVar2 = &pLVar1->DFIBPGKOKEG;
  *ppSVar2 = (System_Collections_Generic_List_string__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}

