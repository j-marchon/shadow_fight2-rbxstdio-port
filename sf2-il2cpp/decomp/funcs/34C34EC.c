// KAHMAJKJMBK$$NIELOMFPJNN @ RVA 0x34C34EC

void KAHMAJKJMBK__NIELOMFPJNN
               (KAHMAJKJMBK_o *__this,System_Collections_Generic_List_KMFIGBGAKNL__o *MHPOMBEOGCD,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_KMFIGBGAKNL__o *pSVar4;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  AJNNHGGLGIF_array *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456861b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMFIGBGAKNL>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__);
                    /* try { // try from 035c354c to 036c3553 has its CatchHandler @ 035c356c */
                    /* try { // try from 035c3554 to 036c3557 has its CatchHandler @ 035c3260 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KMFIGBGAKNL>_GetEnumerator__);
                    /* try { // try from 035c3558 to 036c355b has its CatchHandler @ 035c3564 */
                    /* try { // try from 035c355c to 036c358b has its CatchHandler @ 035c3260 */
    DAT_0456861b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3558 with catch @ 035c3564
                        */
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3490 with catch @ 035c3568
                        */
  pSVar4 = (__this->fields).BJCIIJEPGFL;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c354c with catch @ 035c356c
                        */
  if (pSVar4 != (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c3430 with catch @ 035c3570
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035c33d4 with catch @ 035c3574
                        */
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)pSVar4,
               (System_Collections_Generic_IEnumerable_T__o *)MHPOMBEOGCD,
               Method_System_Collections_Generic_List<KMFIGBGAKNL>_AddRange__);
    pSVar4 = (__this->fields).BJCIIJEPGFL;
    if (pSVar4 != (System_Collections_Generic_List_KMFIGBGAKNL__o *)0x0) {
                    /* try { // try from 035c358c to 036c358f has its CatchHandler @ 035c359c */
                    /* catch() { ... } // from try @ 035c358c with catch @ 035c359c */
                    /* try { // try from 035c35ac to 036c3613 has its CatchHandler @ 035c3628 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<KMFIGBGAKNL>_GetEnumerator__);
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_MoveNext__
                          );
        lVar2 = Method_System_Collections_Generic_List<AJNNHGGLGIF>_Add__;
        if (!bVar3) {
                    /* try { // try from 035c362c to 036c37bf has its CatchHandler @ 035c362c
                       catch() { ... } // from try @ 035c362c with catch @ 035c362c
                       catch() { ... } // from try @ 035c3afc with catch @ 035c362c
                       catch() { ... } // from try @ 035c3b44 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3c80 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3c88 with catch @ 035c362c
                       catch() { ... } // from try @ 035c3d6c with catch @ 035c362c */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<KMFIGBGAKNL>_Dispose__);
          return;
        }
        __this_00 = (__this->fields).LJNCACBBIBD;
        if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) break;
        pAVar5 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pAVar5 == (AJNNHGGLGIF_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pAVar5->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pAVar5->m_Items[(int)uVar1] = (AJNNHGGLGIF_o *)local_48.fields._current;
          thunk_FUN_01c20e04(pAVar5->m_Items + (int)uVar1);
                    /* try { // try from 035c3614 to 036c361f has its CatchHandler @ 035c3260 */
        }
        else {
                    /* try { // try from 035c3620 to 036c3627 has its CatchHandler @ 035c3628 */
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,local_48.fields._current
                     ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035c35ac with catch @ 035c3628
                       catch(type#2 @ 00000000) { ... } // from try @ 035c3620 with catch @ 035c3628
                        */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

