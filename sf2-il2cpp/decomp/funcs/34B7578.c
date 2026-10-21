// KDDOKHLOKMI$$.cctor @ RVA 0x34B7578

void KDDOKHLOKMI___cctor(MethodInfo *method)

{
  KDDOKHLOKMI_StaticFields *pKVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456859c & 1) == 0) {
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    DAT_0456859c = 1;
  }
  pKVar1 = KDDOKHLOKMI_TypeInfo->static_fields;
  pKVar1->MANGIHDNLPM = true;
  ppSVar2 = &pKVar1->DOGHAPDEDFB;
  *ppSVar2 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}

