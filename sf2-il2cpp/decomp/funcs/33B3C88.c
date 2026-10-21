// Nekki.SF2.GUI.Scripts.VersionDependentElements$$.ctor @ RVA 0x33B3C88

void Nekki_SF2_GUI_Scripts_VersionDependentElements___ctor
               (Nekki_SF2_GUI_Scripts_VersionDependentElements_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GameObject__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034b3c98 to 035b3ca3 has its CatchHandler @ 034b46b0 */
  if ((DAT_04567d67 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>__ctor__);
                    /* try { // try from 034b3cc4 to 035b3ccf has its CatchHandler @ 034b485c */
    FUN_01bab630(&System_Collections_Generic_List<GameObject>_TypeInfo);
    DAT_04567d67 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<GameObject>_TypeInfo,method);
                    /* try { // try from 034b3ce0 to 035b3ce7 has its CatchHandler @ 034b47c8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<GameObject>__ctor__);
  ppSVar1 = &(__this->fields).Elements;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 034b3cf8 to 035b3cff has its CatchHandler @ 034b4800 */
                    /* try { // try from 034b3d00 to 035b3d1b has its CatchHandler @ 034b4a20 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

