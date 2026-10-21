// TypeDefIndex 3476
// Namespace: 
// [CompilerGenerated]
// private sealed class MainMenu.CHHBGJEKBBF
// Fields:
//   public GameObject inflictor; // 0x10

// ===== internal bool CJDBKPEEJIG(MainMenu.KCFNDEKJOHK item)  [RVA 0x356F120]
// Nekki.SF2.GUI.Menu.MainMenu.CHHBGJEKBBF$$CJDBKPEEJIG @ RVA 0x356F120

bool Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF__CJDBKPEEJIG
               (Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_o *__this,
               Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_o *item,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *y;
  
                    /* try { // try from 0366f130 to 0376f137 has its CatchHandler @ 03672aa4 */
                    /* try { // try from 0366f138 to 0376f14b has its CatchHandler @ 03672aa0 */
  if ((DAT_04568c4f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0366f14c to 0376f157 has its CatchHandler @ 03672a9c */
    DAT_04568c4f = 1;
  }
  if (item != (Nekki_SF2_GUI_Menu_MainMenu_KCFNDEKJOHK_o *)0x0) {
    x = (UnityEngine_Object_o *)(item->fields).JPKGCIPCIDJ;
    y = (UnityEngine_Object_o *)(__this->fields).inflictor;
                    /* try { // try from 0366f168 to 0376f16f has its CatchHandler @ 03672a64 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366f180 to 0376f187 has its CatchHandler @ 03672a60 */
    bVar1 = UnityEngine_Object__op_Equality(x,y,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x356B1B0]
// Nekki.SF2.GUI.Menu.MainMenu.CHHBGJEKBBF$$.ctor @ RVA 0x356B1B0

void Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF___ctor
               (Nekki_SF2_GUI_Menu_MainMenu_CHHBGJEKBBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

