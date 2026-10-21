// TypeDefIndex 3156
// Namespace: 
// [CompilerGenerated]
// private sealed class DialogCanvasController.JHFDCOFEGJM
// Fields:
//   public HKMLPEALIII type; // 0x10

// ===== internal bool GNFLOPCHGNF(DialogCanvasController.DialogData data)  [RVA 0x34DAD14]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController.JHFDCOFEGJM$$GNFLOPCHGNF @ RVA 0x34DAD14

bool Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM__GNFLOPCHGNF
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM_o *__this,
               Nekki_SF2_GUI_Dialogs_DialogCanvasController_DialogData_o *data,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *x;
  
                    /* try { // try from 035dad14 to 036dad17 has its CatchHandler @ 035dad24 */
                    /* try { // try from 035dad18 to 036dad37 has its CatchHandler @ 035dabc8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dacec with catch @ 035dad1c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dac98 with catch @ 035dad20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035dad14 with catch @ 035dad24
                        */
  if ((DAT_04568709 & 1) == 0) {
                    /* try { // try from 035dad38 to 036dad3b has its CatchHandler @ 035dad60 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035dad3c to 036dad67 has its CatchHandler @ 035dabc8 */
    DAT_04568709 = 1;
  }
  if (data != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_DialogData_o *)0x0) {
    x = (data->fields).Dialog;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035dad38 with catch @ 035dad60 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035dad68 to 036dad6f has its CatchHandler @ 035dad88 */
                    /* try { // try from 035dad70 to 036dad7f has its CatchHandler @ 035dabc8 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 035dad80 to 036dad87 has its CatchHandler @ 035dad88 */
      bVar1 = (data->fields).Type == (__this->fields).type;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035dad68 with catch @ 035dad88
                       catch(type#2 @ 00000000) { ... } // from try @ 035dad80 with catch @ 035dad88
                        */
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34DAA3C]
// Nekki.SF2.GUI.Dialogs.DialogCanvasController.JHFDCOFEGJM$$.ctor @ RVA 0x34DAA3C

void Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM___ctor
               (Nekki_SF2_GUI_Dialogs_DialogCanvasController_JHFDCOFEGJM_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

