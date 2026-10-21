// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$JNKINOCEKIE @ RVA 0x326F840

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__JNKINOCEKIE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,
               System_Collections_Generic_IList_PIADCKMDDAK__o *GHAAKPDHIJJ,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04567213 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_get_Current__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_BuyConsContainer>_GetEnumerator__
                );
    DAT_04567213 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).FEBICCAKJMD;
  if ((__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_02 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                            (__this_01,
                             Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>_get_Values__
                            ),
     __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
              (&local_48,__this_02,
               Method_System_Collections_Generic_Dictionary_ValueCollection<string,_BuyConsContainer>_GetEnumerator__
              );
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_MoveNext__
                          );
        __this_00 = local_48.fields._currentValue;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_BuyConsContainer>_Dispose__
                    );
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
      } while (!bVar1);
      if ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)0x0) break;
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__UpdateData
                ((Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *)__this_00,true,(MethodInfo *)0x0)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

