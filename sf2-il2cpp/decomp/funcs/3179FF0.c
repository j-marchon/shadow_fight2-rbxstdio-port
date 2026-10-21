// Nekki.SF2.GUI.Dialogs.StrangerDialog$$Start @ RVA 0x3179FF0

void Nekki_SF2_GUI_Dialogs_StrangerDialog__Start
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_StoryDialog__Start
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_StrangerDialog__KAJLGLEKLCE(__this,method_00);
                    /* try { // try from 0327a010 to 0337a06b has its CatchHandler @ 0327a1a4 */
                    /* WARNING: Could not recover jumptable at 0x0327a01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
            (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
  return;
}

