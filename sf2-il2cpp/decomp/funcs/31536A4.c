// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$GKPJMHOFIOO @ RVA 0x31536A4

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_o UVar2;
  
                    /* catch() { ... } // from try @ 032532c8 with catch @ 032536a4 */
                    /* catch() { ... } // from try @ 032532fc with catch @ 032536a8 */
                    /* catch() { ... } // from try @ 032532e4 with catch @ 032536ac */
                    /* catch() { ... } // from try @ 032532c0 with catch @ 032536b0 */
                    /* catch() { ... } // from try @ 032532f4 with catch @ 032536b4 */
                    /* catch() { ... } // from try @ 03253534 with catch @ 032536b8 */
  (__this->fields).super.super.LPEFIPGJDJH = 0x5a;
                    /* catch() { ... } // from try @ 0325352c with catch @ 032536bc */
  Nekki_SF2_GUI_Dialogs_StrangerDialog__GKPJMHOFIOO
            ((Nekki_SF2_GUI_Dialogs_StrangerDialog_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03252d84 with catch @ 032536c0 */
                    /* catch() { ... } // from try @ 03252d28 with catch @ 032536c4 */
  pUVar1 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                     ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar2 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 032536e0 to 033536e3 has its CatchHandler @ 032536f4 */
    pUVar1 = Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
                       ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032536e0 with catch @ 032536f4 */
    UnityEngine_TransformExtensions__SetLocalPositionY
              (pUVar1,UVar2.fields.y + 100.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03253704 to 03353777 has its CatchHandler @ 03253830 */
  FUN_01bab8c8();
}

