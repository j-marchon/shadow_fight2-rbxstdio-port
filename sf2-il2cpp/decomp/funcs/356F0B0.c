// Nekki.SF2.GUI.Menu.MainMenu.EBKMGAJJNJM$$CPAEMHABKFP @ RVA 0x356F0B0

bool Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM__CPAEMHABKFP
               (Nekki_SF2_GUI_Menu_MainMenu_EBKMGAJJNJM_o *__this,
               Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_o *item,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  
                    /* try { // try from 0366f0b4 to 0376f0bb has its CatchHandler @ 03672afc */
                    /* try { // try from 0366f0bc to 0376f0cf has its CatchHandler @ 03672af8 */
  if ((DAT_04568c4e & 1) == 0) {
                    /* try { // try from 0366f0d0 to 0376f0db has its CatchHandler @ 03672af4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c4e = 1;
  }
  if (item != (Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_o *)0x0) {
                    /* try { // try from 0366f0ec to 0376f0f3 has its CatchHandler @ 03672ab0 */
    x = (UnityEngine_Object_o *)(item->fields).JPKGCIPCIDJ;
    y = (UnityEngine_Object_o *)(__this->fields).inflictor;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366f104 to 0376f10b has its CatchHandler @ 03672aac */
                    /* try { // try from 0366f118 to 0376f11f has its CatchHandler @ 03672aa8 */
    bVar1 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

