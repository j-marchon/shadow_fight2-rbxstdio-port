// Nekki.SF2.GUI.Scenes.LoaderScreen$$.ctor @ RVA 0x2FF50B8

void Nekki_SF2_GUI_Scenes_LoaderScreen___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,MethodInfo *method)

{
  CMAACCOMHBJ_o *__this_00;
  CMAACCOMHBJ_o **ppCVar1;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *__this_01;
  System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 030f50bc to 031f5123 has its CatchHandler @ 030f4ff4 */
  if ((DAT_04565a92 & 1) == 0) {
    FUN_01bab630(&CMAACCOMHBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_TypeInfo);
    DAT_04565a92 = 1;
    method = extraout_x1;
  }
  (__this->fields).AHAMOAJILMO = true;
  (__this->fields).IHEIBDOIGAE = true;
                    /* try { // try from 030f5124 to 031f5133 has its CatchHandler @ 030f5134 */
  __this_00 = (CMAACCOMHBJ_o *)thunk_FUN_01bda818(CMAACCOMHBJ_TypeInfo,method);
  CMAACCOMHBJ___ctor(__this_00,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).FNCCNKDPDAB;
                    /* catch() { ... } // from try @ 030f5070 with catch @ 030f5134
                       catch() { ... } // from try @ 030f50a4 with catch @ 030f5134
                       catch() { ... } // from try @ 030f5124 with catch @ 030f5134 */
                    /* try { // try from 030f5138 to 031f513b has its CatchHandler @ 030f5144 */
  *ppCVar1 = __this_00;
                    /* try { // try from 030f513c to 031f5147 has its CatchHandler @ 030f4ff4 */
  thunk_FUN_01c20e04(ppCVar1,__this_00);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030f5138 with catch @ 030f5144
                        */
  (__this->fields).PGOCNMLFPIJ = 1;
  (__this->fields).GIIFJPPGGON = 8;
  __this_01 = (System_Collections_Generic_List_MGNPHCAAEIO_IEKBEIOCOPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNPHCAAEIO_IEKBEIOCOPO>__ctor__);
  ppSVar2 = &(__this->fields).JPOBFBBGOBC;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

