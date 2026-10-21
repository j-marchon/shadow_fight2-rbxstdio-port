// Nekki.SF2.GUI.Map.ContentToggle$$FGPJLJDMNEA @ RVA 0x33B2F00

void Nekki_SF2_GUI_Map_ContentToggle__FGPJLJDMNEA
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KCEKMOECEJK__o *pSVar2;
  
                    /* try { // try from 034b2f04 to 035b2f1f has its CatchHandler @ 034b4a64 */
  if ((DAT_04567d59 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_get_Count__);
    DAT_04567d59 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034b2f2c to 035b2f33 has its CatchHandler @ 034b4968 */
  pSVar2 = (__this->fields).MAPPKOGKCBA;
  iVar1 = (__this->fields).FDGAGAEIAOO + 1;
  (__this->fields).FDGAGAEIAOO = iVar1;
  if (pSVar2 != (System_Collections_Generic_List_KCEKMOECEJK__o *)0x0) {
                    /* try { // try from 034b2f44 to 035b2f4b has its CatchHandler @ 034b4964 */
    if ((pSVar2->fields)._size <= iVar1) {
                    /* try { // try from 034b2f4c to 035b2f57 has its CatchHandler @ 034b4960 */
      (__this->fields).FDGAGAEIAOO = 0;
    }
    Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF(__this,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

