// EBCFKDCOIGA$$.ctor @ RVA 0x34A5C38

void EBCFKDCOIGA___ctor(EBCFKDCOIGA_o *__this,MethodInfo *method)

{
  EHEHBPFEIKB_o *pEVar1;
  EHEHBPFEIKB_o **ppEVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035a5c48 to 036a5c4f has its CatchHandler @ 035a5c8c */
                    /* try { // try from 035a5c50 to 036a5c7b has its CatchHandler @ 035a5b08 */
  if ((DAT_045684eb & 1) == 0) {
    FUN_01bab630(&EHEHBPFEIKB_TypeInfo);
    DAT_045684eb = 1;
    method = extraout_x1;
  }
  pEVar1 = (EHEHBPFEIKB_o *)thunk_FUN_01bda818(EHEHBPFEIKB_TypeInfo,method);
                    /* try { // try from 035a5c7c to 036a5c7f has its CatchHandler @ 035a5c90 */
  EHEHBPFEIKB___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).DLCDMDDNFCP;
                    /* try { // try from 035a5c80 to 036a5c83 has its CatchHandler @ 035a5c88 */
                    /* try { // try from 035a5c84 to 036a5caf has its CatchHandler @ 035a5b08 */
  *ppEVar2 = pEVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c80 with catch @ 035a5c88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c48 with catch @ 035a5c8c
                        */
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c7c with catch @ 035a5c90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c24 with catch @ 035a5c94
                        */
  pEVar1 = (EHEHBPFEIKB_o *)thunk_FUN_01bda818(EHEHBPFEIKB_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5c10 with catch @ 035a5c98
                        */
  EHEHBPFEIKB___ctor(pEVar1,(MethodInfo *)0x0);
  ppEVar2 = &(__this->fields).IPPMJFKOBLF;
  *ppEVar2 = pEVar1;
                    /* try { // try from 035a5cb0 to 036a5cb3 has its CatchHandler @ 035a5cd4 */
  thunk_FUN_01c20e04(ppEVar2,pEVar1);
                    /* try { // try from 035a5cb4 to 036a5cdb has its CatchHandler @ 035a5b08 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).KLKKKGCPGNE = false;
  return;
}

