// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupHints @ RVA 0x351605C

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               MIBHAJBEMIK_array *LMAPGNIDHFE,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *LMAPGNIDHFE_00;
  
  if ((DAT_0456892a & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_0456892a = 1;
  }
  LMAPGNIDHFE_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)LMAPGNIDHFE,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupHints
            (__this,AEIKGKKKFMM,(System_Collections_Generic_List_MIBHAJBEMIK__o *)LMAPGNIDHFE_00,
             method);
  return;
}

