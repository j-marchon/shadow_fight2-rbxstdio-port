// Nekki.SF2.GUI.Shop.ParametersPanel$$.ctor @ RVA 0x3486A18

void Nekki_SF2_GUI_Shop_ParametersPanel___ctor
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ParameterScrollItem__o *__this_00;
  System_Collections_Generic_List_ParameterScrollItem__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03586a24 to 03686a2b has its CatchHandler @ 03587088 */
                    /* try { // try from 03586a3c to 03686a43 has its CatchHandler @ 0358708c */
  if ((DAT_045683b4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
                    /* try { // try from 03586a50 to 03686a57 has its CatchHandler @ 03587078 */
    FUN_01bab630(&System_Collections_Generic_List<ParameterScrollItem>_TypeInfo);
    DAT_045683b4 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03586a68 to 03686a6f has its CatchHandler @ 035870c4 */
  __this_00 = (System_Collections_Generic_List_ParameterScrollItem__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ParameterScrollItem>_TypeInfo,
                                 method);
                    /* try { // try from 03586a70 to 03686a83 has its CatchHandler @ 03587084 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ParameterScrollItem>__ctor__);
  ppSVar1 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03586a88 to 03686a93 has its CatchHandler @ 03587080 */
                    /* try { // try from 03586a94 to 03686a9f has its CatchHandler @ 035870c0 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

