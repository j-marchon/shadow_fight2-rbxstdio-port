// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$KOJMOHMGLAI @ RVA 0x303213C

void Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *MIJCJJCICDA,bool HAFKHBAABDI,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *x;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ChatSFView__o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_array *pNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565d1f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ChatSFView>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ChatSFView>_Insert__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565d1f = 1;
  }
                    /* try { // try from 031321d0 to 032321d3 has its CatchHandler @ 03132400 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 031321d8 to 032321e3 has its CatchHandler @ 031323fc */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 031321f0 to 032321f7 has its CatchHandler @ 0313241c */
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)MIJCJJCICDA,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  if (MIJCJJCICDA != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)MIJCJJCICDA,(MethodInfo *)0x0);
                    /* try { // try from 03132208 to 03232213 has its CatchHandler @ 03132420 */
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0313221c to 03232223 has its CatchHandler @ 03132410 */
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      pSVar4 = (__this->fields).CACFIIMNJMG;
      if (pSVar4 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
                    /* try { // try from 03132244 to 03232257 has its CatchHandler @ 03132428 */
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar4,
                   Method_System_Collections_Generic_List<ChatSFView>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
                    /* try { // try from 03132258 to 0323225f has its CatchHandler @ 03132418 */
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
                    /* try { // try from 03132268 to 0323226b has its CatchHandler @ 031322b4 */
                    /* try { // try from 0313226c to 0323227b has its CatchHandler @ 031322b0 */
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<ChatSFView>_MoveNext__
                                 ), x = local_60.fields._current, bVar3) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03132288 to 0323229b has its CatchHandler @ 03132424 */
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if (bVar3) {
                    /* try { // try from 0313229c to 032322d3 has its CatchHandler @ 03131fdc */
            if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* catch() { ... } // from try @ 0313226c with catch @ 031322b0 */
                    /* catch() { ... } // from try @ 03132268 with catch @ 031322b4 */
            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,Method_System_Collections_Generic_List_Enumerator<ChatSFView>_Dispose__
                  );
        lVar2 = Method_System_Collections_Generic_List<ChatSFView>_Add__;
                    /* try { // try from 031322d4 to 032322d7 has its CatchHandler @ 031323e8 */
        pSVar4 = (__this->fields).CACFIIMNJMG;
        if (pSVar4 != (System_Collections_Generic_List_ChatSFView__o *)0x0) {
          if (HAFKHBAABDI) {
                    /* try { // try from 031322f4 to 032322fb has its CatchHandler @ 031323f8 */
            System_Collections_Generic_List<object>__Insert
                      ((System_Collections_Generic_List_object__o *)pSVar4,0,
                       (Il2CppObject *)MIJCJJCICDA,
                       Method_System_Collections_Generic_List<ChatSFView>_Insert__);
          }
          else {
                    /* try { // try from 03132300 to 03232307 has its CatchHandler @ 031323f4 */
            pNVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_array *)0x0) goto LAB_03132380;
            uVar1 = (pSVar4->fields)._size;
                    /* try { // try from 03132328 to 0323232f has its CatchHandler @ 03132404 */
            if (uVar1 < (uint)pNVar5->max_length) {
                    /* try { // try from 03132330 to 03232367 has its CatchHandler @ 03131fdc */
              (pSVar4->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = MIJCJJCICDA;
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,MIJCJJCICDA);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)MIJCJJCICDA,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
                    /* try { // try from 03132368 to 0323236f has its CatchHandler @ 03132414 */
                    /* try { // try from 03132370 to 032323b7 has its CatchHandler @ 03131fdc */
          return;
        }
      }
    }
  }
LAB_03132380:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

