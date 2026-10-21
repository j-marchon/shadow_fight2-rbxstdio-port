// Nekki.SF2.GUI.Common.Hints.HintList$$ShowHints @ RVA 0x3515D70

void Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,FEEECOADFNH_array *EJHNEHKMEOB,
               MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *EJHNEHKMEOB_00;
  
  if ((DAT_04568927 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<FEEECOADFNH>__);
    DAT_04568927 = 1;
  }
  EJHNEHKMEOB_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)EJHNEHKMEOB,
                  Method_System_Linq_Enumerable_ToList<FEEECOADFNH>__);
  Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
            (__this,(System_Collections_Generic_List_FEEECOADFNH__o *)EJHNEHKMEOB_00,method);
  return;
}

