// TypeDefIndex 1485
// Namespace: 
// public class MedalsScrollItem.FALGLCABJFN
// Fields:
//   public List<KMDOLFBIGNC> PCAAANOFKNG; // 0x10

// ===== public void .ctor()  [RVA 0x3198868]
// Nekki.SF2.GUI.Dialogs.Raids.MedalsScrollItem.FALGLCABJFN$$.ctor @ RVA 0x3198868

void Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *__this,
               MethodInfo *method)

{
  System_Collections_Generic_List_KMDOLFBIGNC__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo);
    DAT_04566a8d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KMDOLFBIGNC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KMDOLFBIGNC>__ctor__);
  (__this->fields).PCAAANOFKNG = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

