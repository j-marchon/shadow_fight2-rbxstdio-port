// Nekki.SF2.GUI.Dialogs.StrangerBigDialog$$NEGIBLNMKPH @ RVA 0x3152EB4

void Nekki_SF2_GUI_Dialogs_StrangerBigDialog__NEGIBLNMKPH
               (Nekki_SF2_GUI_Dialogs_StrangerBigDialog_o *__this,
               UnityEngine_Transform_o *JNPCENEINON,int32_t CBBJMNGHMIF,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  if (JNPCENEINON != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 03252ed0 to 03352edb has its CatchHandler @ 03253620 */
    UVar1 = UnityEngine_Transform__get_localPosition(JNPCENEINON,(MethodInfo *)0x0);
                    /* try { // try from 03252ee0 to 03352ee7 has its CatchHandler @ 03253614 */
    UnityEngine_TransformExtensions__SetLocalPositionY
              (JNPCENEINON,UVar1.fields.y + (float)CBBJMNGHMIF,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03252ef0 to 03352eff has its CatchHandler @ 0325361c */
  FUN_01bab8c8();
}

