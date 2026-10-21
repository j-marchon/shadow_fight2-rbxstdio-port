// Nekki.SF2.GUI.Menu.MainMenu$$.ctor @ RVA 0x356EE38

void Nekki_SF2_GUI_Menu_MainMenu___ctor(Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Slider_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0366ee40 to 0376ee47 has its CatchHandler @ 03672cf8 */
                    /* try { // try from 0366ee48 to 0376ee5b has its CatchHandler @ 036730e4 */
                    /* try { // try from 0366ee60 to 0376ee6b has its CatchHandler @ 03672cf4 */
  if ((DAT_04568c4b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_TypeInfo);
                    /* try { // try from 0366ee84 to 0376ee87 has its CatchHandler @ 03673328 */
                    /* try { // try from 0366ee88 to 0376ee8b has its CatchHandler @ 03672bec */
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568c4b = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366ee9c to 0376eea3 has its CatchHandler @ 03672bf0 */
  *(undefined2 *)&(__this->fields).super.field_0x16 = 0x101;
  *(undefined1 *)&(__this->fields)._money = 1;
  (__this->fields)._MaterialsOpenedPosition.fields.x = 0.5;
                    /* try { // try from 0366eeb4 to 0376eebb has its CatchHandler @ 03672be8 */
  *(undefined4 *)&(__this->fields).Scroll = 0x3e800000;
  __this_00 = (UnityEngine_UI_Slider_o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>_TypeInfo,
                                 method);
                    /* try { // try from 0366eec8 to 0376eecf has its CatchHandler @ 03672be4 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MainMenu_KCFNDEKJOHK>__ctor__);
  (__this->fields).MLLHHEDCFJH = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).MLLHHEDCFJH,__this_00);
  (__this->fields).MAFKPOLHNNE = 1.4013e-45;
                    /* try { // try from 0366eee0 to 0376eee7 has its CatchHandler @ 03672be0 */
  (__this->fields).NMKOOKOKJMP = true;
                    /* try { // try from 0366eee8 to 0376eefb has its CatchHandler @ 03672bdc */
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0366eefc to 0376ef07 has its CatchHandler @ 03672bd8 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

