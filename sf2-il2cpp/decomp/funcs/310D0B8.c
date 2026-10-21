// Nekki.SF2.GUI.SpriteRendererQuality$$Awake @ RVA 0x310D0B8

void Nekki_SF2_GUI_SpriteRendererQuality__Awake
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  System_Action_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar2;
  
                    /* try { // try from 0320d0e4 to 0330d0eb has its CatchHandler @ 0320d150 */
  if ((DAT_04566557 & 1) == 0) {
                    /* try { // try from 0320d0f8 to 0330d0ff has its CatchHandler @ 0320d14c */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* try { // try from 0320d108 to 0330d117 has its CatchHandler @ 0320d144 */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<SpriteRenderer>__);
                    /* try { // try from 0320d118 to 0330d13b has its CatchHandler @ 0320d054 */
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SpriteRendererQuality_IGLCHJBMLCO__);
    DAT_04566557 = 1;
  }
  pUVar1 = (UnityEngine_SpriteRenderer_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<SpriteRenderer>__);
                    /* try { // try from 0320d13c to 0330d13f has its CatchHandler @ 0320d148 */
                    /* try { // try from 0320d140 to 0330d167 has its CatchHandler @ 0320d054 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d108 with catch @ 0320d144
                        */
  (__this->fields).OMLKINHHMLE = pUVar1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d13c with catch @ 0320d148
                        */
  thunk_FUN_01c20e04();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d0f8 with catch @ 0320d14c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d0e4 with catch @ 0320d150
                        */
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
                    /* try { // try from 0320d168 to 0330d16b has its CatchHandler @ 0320d18c */
                    /* try { // try from 0320d16c to 0330d193 has its CatchHandler @ 0320d054 */
  if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  FGKGKDEJCOG__GJOHNMGHOAF(CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0320d168 with catch @ 0320d18c */
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0320d194 to 0330d19b has its CatchHandler @ 0320d1b0 */
    UVar2 = UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0320d19c to 0330d1a7 has its CatchHandler @ 0320d054 */
    (__this->fields).EJBDDOCDMEE.fields.x = UVar2.fields.x;
    (__this->fields).EJBDDOCDMEE.fields.y = UVar2.fields.y;
    (__this->fields).EJBDDOCDMEE.fields.z = UVar2.fields.z;
                    /* try { // try from 0320d1a8 to 0330d1af has its CatchHandler @ 0320d1b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0320d194 with catch @ 0320d1b0
                       catch(type#2 @ 00000000) { ... } // from try @ 0320d1a8 with catch @ 0320d1b0
                        */
                    /* try { // try from 0320d1b4 to 0330d27b has its CatchHandler @ 0320d1b4
                       catch() { ... } // from try @ 0320d1b4 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2b4 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2d8 with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d2fc with catch @ 0320d1b4
                       catch() { ... } // from try @ 0320d34c with catch @ 0320d1b4 */
    Nekki_SF2_GUI_SpriteRendererQuality__IGLCHJBMLCO(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

