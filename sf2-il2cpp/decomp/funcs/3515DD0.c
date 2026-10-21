// Nekki.SF2.GUI.Common.Hints.HintList$$GetHintGroupByHintIDs @ RVA 0x3515DD0

Nekki_SF2_GUI_Common_Hints_HintGroup_o *
Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
          (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MIBHAJBEMIK_array *GLIELCCFAGL,
          MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *GLIELCCFAGL_00;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *pNVar1;
  
  if ((DAT_04568928 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_04568928 = 1;
  }
  GLIELCCFAGL_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)GLIELCCFAGL,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  pNVar1 = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByHintIDs
                     (__this,(System_Collections_Generic_List_MIBHAJBEMIK__o *)GLIELCCFAGL_00,method
                     );
  return pNVar1;
}

