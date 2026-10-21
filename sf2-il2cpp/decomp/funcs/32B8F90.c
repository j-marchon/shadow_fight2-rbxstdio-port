// Nekki.SF2.GUI.Common.Hints.HintCache$$GetFightHints @ RVA 0x32B8F90

UnityEngine_GameObject_array *
Nekki_SF2_GUI_Common_Hints_HintCache__GetFightHints
          (Nekki_SF2_GUI_Common_Hints_HintCache_o *__this,int32_t HDAEJLFDNJC,
          MIBHAJBEMIK_array *GLIELCCFAGL,MethodInfo *method)

{
  System_Collections_Generic_List_TSource__o *GLIELCCFAGL_00;
  UnityEngine_GameObject_array *pUVar1;
  MethodInfo *in_x4;
  
  if ((DAT_04567472 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
    DAT_04567472 = 1;
  }
  GLIELCCFAGL_00 =
       System_Linq_Enumerable__ToList<Int32Enum>
                 ((System_Collections_Generic_IEnumerable_TSource__o *)GLIELCCFAGL,
                  Method_System_Linq_Enumerable_ToList<MIBHAJBEMIK>__);
  pUVar1 = Nekki_SF2_GUI_Common_Hints_HintCache__GetHints
                     (__this,HDAEJLFDNJC,false,
                      (System_Collections_Generic_List_MIBHAJBEMIK__o *)GLIELCCFAGL_00,in_x4);
  return pUVar1;
}

