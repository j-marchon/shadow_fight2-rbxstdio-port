// Nekki.SF2.GUI.DebugModules.ModelDebugUI$$.ctor @ RVA 0x303D3D8

void Nekki_SF2_GUI_DebugModules_ModelDebugUI___ctor
               (Nekki_SF2_GUI_DebugModules_ModelDebugUI_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0313d3e8 to 0323d3f7 has its CatchHandler @ 0313d40c */
  if ((DAT_04565d9a & 1) == 0) {
                    /* try { // try from 0313d3f8 to 0323d403 has its CatchHandler @ 0313d134 */
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 0313d404 to 0323d40b has its CatchHandler @ 0313d40c */
    DAT_04565d9a = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 0313d3e8 with catch @ 0313d40c
                       catch() { ... } // from try @ 0313d404 with catch @ 0313d40c */
  pSVar1 = (System_Text_StringBuilder_o *)
           thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).JCPNIJOKOED;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).MIFJGHINNIN;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

