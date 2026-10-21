// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$MPMDFILDNCJ @ RVA 0x33DBB6C

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__MPMDFILDNCJ
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  CLMJPODNPKB_o *pCVar3;
  VirtualInvokeData *pVVar4;
  CLMJPODNPKB_c *pCVar5;
  ulong uVar6;
  int32_t *piVar7;
  
                    /* try { // try from 034dbb70 to 035dbb77 has its CatchHandler @ 034dbba8 */
                    /* try { // try from 034dbb78 to 035dbb7b has its CatchHandler @ 034dbba0 */
  if ((DAT_04567e74 & 1) == 0) {
                    /* try { // try from 034dbb7c to 035dbb7f has its CatchHandler @ 034dbb9c */
                    /* try { // try from 034dbb80 to 035dbbbb has its CatchHandler @ 034db7cc */
                    /* catch() { ... } // from try @ 034dba78 with catch @ 034dbb84 */
    FUN_01bab630(&CLMJPODNPKB_TypeInfo);
    DAT_04567e74 = 1;
  }
                    /* catch() { ... } // from try @ 034dba40 with catch @ 034dbb90 */
  bVar2 = Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034db994 with catch @ 034dbb98 */
  if (!bVar2) {
    return;
  }
                    /* catch() { ... } // from try @ 034dbb7c with catch @ 034dbb9c */
                    /* catch() { ... } // from try @ 034dbb78 with catch @ 034dbba0 */
  pCVar3 = Nekki_SF2_GUI_Common_HintCanvas__get_Instance((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034dba20 with catch @ 034dbba4 */
  if (pCVar3 == (CLMJPODNPKB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034dbc1c to 035dbd3f has its CatchHandler @ 034dbc1c
                       catch() { ... } // from try @ 034dbc1c with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbe00 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbeb8 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbec0 with catch @ 034dbc1c
                       catch() { ... } // from try @ 034dbf74 with catch @ 034dbc1c */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 034dbb70 with catch @ 034dbba8 */
                    /* catch() { ... } // from try @ 034db974 with catch @ 034dbbac */
  pCVar5 = pCVar3->klass;
  uVar1._0_1_ = (pCVar5->_2).rank;
  uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
                    /* try { // try from 034dbbbc to 035dbbbf has its CatchHandler @ 034dbbec */
                    /* try { // try from 034dbbc0 to 035dbbfb has its CatchHandler @ 034db7cc */
  if (uVar6 != 0) {
    piVar7 = &((pCVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)CLMJPODNPKB_TypeInfo) {
                    /* try { // try from 034dbbfc to 035dbc03 has its CatchHandler @ 034dbc18 */
                    /* try { // try from 034dbc04 to 035dbc0f has its CatchHandler @ 034db7cc */
        pVVar4 = pCVar5->vtable + (*piVar7 + 2);
        goto LAB_034dbc0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 034dbbbc with catch @ 034dbbec */
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar3,CLMJPODNPKB_TypeInfo,2);
LAB_034dbc0c:
                    /* try { // try from 034dbc10 to 035dbc17 has its CatchHandler @ 034dbc18 */
                    /* WARNING: Could not recover jumptable at 0x034dbc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 034dbb54 with catch @ 034dbc18
                       catch() { ... } // from try @ 034dbbfc with catch @ 034dbc18
                       catch() { ... } // from try @ 034dbc10 with catch @ 034dbc18 */
  (*pVVar4->methodPtr)(pCVar3,pVVar4->method);
  return;
}

