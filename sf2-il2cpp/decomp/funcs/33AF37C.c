// Nekki.SF2.GUI.Dialogs.BaseDialog$$IGDDKJJMDLP @ RVA 0x33AF37C

void Nekki_SF2_GUI_Dialogs_BaseDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_List_Button__o *__this_00;
  UnityEngine_Transform_o *transform;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567d37 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Button>_get_Current__);
                    /* try { // try from 034af3c0 to 035af3c7 has its CatchHandler @ 034af45c */
    FUN_01bab630(&LabelButton_TypeInfo);
                    /* try { // try from 034af3cc to 035af3cf has its CatchHandler @ 034af438 */
                    /* try { // try from 034af3d4 to 035af3d7 has its CatchHandler @ 034af434 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_GetEnumerator__);
                    /* try { // try from 034af3dc to 035af3df has its CatchHandler @ 034af42c */
    DAT_04567d37 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 034af3e4 to 035af3e7 has its CatchHandler @ 034af428 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 034af3ec to 035af3ef has its CatchHandler @ 034af424 */
                    /* try { // try from 034af3f4 to 035af3ff has its CatchHandler @ 034af44c */
  fVar3 = (float)(*(__this->klass->vtable)._10_OFGMFNANEGD.methodPtr)
                           (__this,(__this->klass->vtable)._10_OFGMFNANEGD.method);
  __this_00 = (__this->fields).EHGPDKENGAP;
  if (__this_00 != (System_Collections_Generic_List_Button__o *)0x0) {
                    /* try { // try from 034af404 to 035af407 has its CatchHandler @ 034af40c */
                    /* try { // try from 034af408 to 035af47f has its CatchHandler @ 034ae7c8 */
                    /* catch() { ... } // from try @ 034af404 with catch @ 034af40c */
                    /* catch() { ... } // from try @ 034af1f4 with catch @ 034af410 */
                    /* catch() { ... } // from try @ 034af2a4 with catch @ 034af414 */
                    /* catch() { ... } // from try @ 034af284 with catch @ 034af418 */
                    /* catch() { ... } // from try @ 034af250 with catch @ 034af41c */
                    /* catch() { ... } // from try @ 034af204 with catch @ 034af420 */
                    /* catch() { ... } // from try @ 034af3ec with catch @ 034af424 */
                    /* catch() { ... } // from try @ 034af3e4 with catch @ 034af428 */
                    /* catch() { ... } // from try @ 034af3dc with catch @ 034af42c */
                    /* catch() { ... } // from try @ 034af2f8 with catch @ 034af430 */
                    /* catch() { ... } // from try @ 034af3d4 with catch @ 034af434 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Button>_GetEnumerator__);
                    /* catch() { ... } // from try @ 034af3cc with catch @ 034af438 */
                    /* catch() { ... } // from try @ 034af28c with catch @ 034af43c */
                    /* catch() { ... } // from try @ 034af258 with catch @ 034af440 */
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* catch() { ... } // from try @ 034af274 with catch @ 034af444 */
    local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 034af238 with catch @ 034af448 */
    local_50.fields._current = local_68.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 034af3f4 with catch @ 034af44c */
                    /* catch() { ... } // from try @ 034af1d4 with catch @ 034af450 */
                    /* catch() { ... } // from try @ 034af20c with catch @ 034af454 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<Button>_MoveNext__);
                    /* catch() { ... } // from try @ 034af1b8 with catch @ 034af458 */
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<Button>_Dispose__);
        return;
      }
                    /* catch() { ... } // from try @ 034af3c0 with catch @ 034af45c */
                    /* catch() { ... } // from try @ 034af158 with catch @ 034af460 */
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0)
      break;
                    /* catch() { ... } // from try @ 034af0fc with catch @ 034af464 */
      bVar1 = (LabelButton_TypeInfo->_2).naturalAligment;
                    /* try { // try from 034af480 to 035af483 has its CatchHandler @ 034af668 */
      if (((((UnityEngine_Component_c *)(local_50.fields._current)->klass)->_2).naturalAligment <
           bVar1) ||
         ((((UnityEngine_Component_c *)(local_50.fields._current)->klass)->_2).typeHierarchy
          [(ulong)bVar1 - 1] != (Il2CppClass *)LabelButton_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      transform = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 034af4a0 to 035af50f has its CatchHandler @ 034af948 */
      UnityEngine_TransformExtensions__SetLocalPositionY
                (transform,-(fVar3 + 60.0),(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

