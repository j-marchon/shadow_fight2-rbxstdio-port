// Nekki.SF2.GUI.Fight.StylePanel$$.ctor @ RVA 0x3293928

void Nekki_SF2_GUI_Fight_StylePanel___ctor
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Collections_Generic_Dictionary_ECENNHNBAME__int__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0339392c to 03493937 has its CatchHandler @ 03393a60 */
  if ((DAT_04567348 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_TypeInfo);
    DAT_04567348 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03393978 to 03493987 has its CatchHandler @ 03393a64 */
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>__ctor__);
  ppSVar1 = &(__this->fields).IFAJMBGJEIN;
                    /* try { // try from 0339398c to 03493997 has its CatchHandler @ 03393a5c */
  *ppSVar1 = (System_Collections_Generic_Dictionary_ECENNHNBAME__int__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

