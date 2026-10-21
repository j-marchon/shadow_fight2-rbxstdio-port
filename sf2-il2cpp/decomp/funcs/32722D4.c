// Nekki.SF2.GUI.StrikeThroughTextLine$$OnPopulateMesh @ RVA 0x32722D4

void Nekki_SF2_GUI_StrikeThroughTextLine__OnPopulateMesh
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,
               UnityEngine_UI_VertexHelper_o *BKAFIEMJJGM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  undefined4 uVar3;
  System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *__this_00;
  UnityEngine_UIVertex_array *verts;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auStack_170 [112];
  System_Collections_Generic_List_Enumerator_T__o local_100 [4];
  System_Collections_Generic_List_Enumerator_T__o local_90;
  
  if ((DAT_04567230 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    DAT_04567230 = 1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  if (BKAFIEMJJGM != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BKAFIEMJJGM,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._KHPCAICPJCK_k__BackingField;
    if (__this_00 != (System_Collections_Generic_List_StrikeThroughTextLine_NLGMBKIAOPD__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (local_100,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<StrikeThroughTextLine_NLGMBKIAOPD>_GetEnumerator__
                );
      local_90.fields._index = local_100[0].fields._index;
      local_90.fields._version = local_100[0].fields._version;
      local_90.fields._list = local_100[0].fields._list;
      local_90.fields._current = local_100[0].fields._current;
      do {
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_90,
                             Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_MoveNext__
                            );
          pIVar1 = local_90.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_90,
                       Method_System_Collections_Generic_List_Enumerator<StrikeThroughTextLine_NLGMBKIAOPD>_Dispose__
                      );
            return;
          }
          if (local_90.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar9 = *(undefined8 *)((long)&local_90.fields._current[1].monitor + 4);
          fVar6 = *(float *)((long)&local_90.fields._current[2].klass + 4) -
                  *(float *)&local_90.fields._current[1].monitor;
          fVar7 = SUB84(local_90.fields._current[2].monitor,0) - (float)uVar9;
          fVar8 = (float)((ulong)local_90.fields._current[2].monitor >> 0x20) -
                  (float)((ulong)uVar9 >> 0x20);
        } while (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 <= 1e-05);
        verts = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
        uVar4 = 0;
        pfVar5 = &verts->m_Items[0].fields.position.fields.y;
        do {
          if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          memcpy(local_100,
                 &(UnityEngine_UIVertex_TypeInfo->static_fields->s_DefaultTangent).fields.w,0x6c);
          if (verts == (UnityEngine_UIVertex_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          memcpy(auStack_170,local_100,0x6c);
          if ((uint)verts->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          memcpy((UnityEngine_Vector3_Fields *)(pfVar5 + -1),auStack_170,0x6c);
          switch(uVar4 & 0xffffffff) {
          case 0:
            fVar6 = *(float *)&pIVar1[3].klass;
            uVar9 = *(undefined8 *)((long)&pIVar1[1].monitor + 4);
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x = *(float *)&pIVar1[1].monitor - fVar6;
            *(ulong *)pfVar5 = CONCAT44((float)((ulong)uVar9 >> 0x20) + 0.0,fVar6 + (float)uVar9);
            break;
          case 1:
            fVar6 = *(float *)((long)&pIVar1[2].monitor + 4);
            uVar9 = *(undefined8 *)((long)&pIVar1[2].klass + 4);
            uVar9 = CONCAT44(*(float *)&pIVar1[3].klass + (float)((ulong)uVar9 >> 0x20),
                             *(float *)&pIVar1[3].klass + (float)uVar9);
            goto LAB_03372524;
          case 2:
            fVar7 = *(float *)((long)&pIVar1[2].monitor + 4);
            fVar6 = *(float *)&pIVar1[3].klass;
            fVar8 = *(float *)&pIVar1[2].monitor;
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x =
                 fVar6 + *(float *)((long)&pIVar1[2].klass + 4);
            *pfVar5 = fVar8 - fVar6;
            pfVar5[1] = fVar7 + 0.0;
            break;
          case 3:
            fVar6 = *(float *)&pIVar1[2].klass;
            uVar9 = CONCAT44((float)((ulong)pIVar1[1].monitor >> 0x20) - *(float *)&pIVar1[3].klass,
                             SUB84(pIVar1[1].monitor,0) - *(float *)&pIVar1[3].klass);
LAB_03372524:
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->x = (float)(int)uVar9;
            ((UnityEngine_Vector3_Fields *)(pfVar5 + -1))->y = (float)(int)((ulong)uVar9 >> 0x20);
            pfVar5[1] = fVar6 + 0.0;
          }
          *pfVar5 = *pfVar5 + *(float *)((long)&pIVar1[4].monitor + 4);
          uVar3 = FUN_01ca4568(*(undefined4 *)((long)&pIVar1[3].klass + 4),
                               *(undefined4 *)&pIVar1[3].monitor,
                               *(undefined4 *)((long)&pIVar1[3].monitor + 4),
                               *(undefined4 *)&pIVar1[4].klass,0);
          if ((uint)verts->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          uVar4 = uVar4 + 1;
          pfVar5[9] = (float)uVar3;
          pfVar5 = pfVar5 + 0x1b;
        } while (uVar4 != 4);
        UnityEngine_UI_VertexHelper__AddUIVertexQuad(BKAFIEMJJGM,verts,(MethodInfo *)0x0);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

