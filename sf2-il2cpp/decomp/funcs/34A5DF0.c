// EBCFKDCOIGA$$.ctor @ RVA 0x34A5DF0

void EBCFKDCOIGA___ctor(EBCFKDCOIGA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  EHEHBPFEIKB_o *pEVar1;
  EHEHBPFEIKB_o **ppEVar2;
  
  if ((DAT_045684ed & 1) == 0) {
    FUN_01bab630(&EHEHBPFEIKB_TypeInfo);
    DAT_045684ed = 1;
  }
  pEVar1 = (EHEHBPFEIKB_o *)thunk_FUN_01bda818(EHEHBPFEIKB_TypeInfo);
  EHEHBPFEIKB___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).DLCDMDDNFCP;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  pEVar1 = (EHEHBPFEIKB_o *)thunk_FUN_01bda818(EHEHBPFEIKB_TypeInfo);
  EHEHBPFEIKB___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).IPPMJFKOBLF;
  *ppEVar2 = pEVar1;
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  EBCFKDCOIGA__HNIHOIAMDPC(__this,AHDGNOJPPIB,method);
  return;
}

