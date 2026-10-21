// Nekki.SF2.GUI.DebugModules.ScreenDebug$$MBAEBKFKHEI @ RVA 0x352923C

void Nekki_SF2_GUI_DebugModules_ScreenDebug__MBAEBKFKHEI
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,UnityEngine_UI_Text_o *CJJNBBIFAPM,
               System_String_o *HKJPKDKDKAG,System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Text_StringBuilder_o *pSVar3;
  Il2CppObject *arg0;
  UnityEngine_RectTransform_o *__this_00;
  undefined8 uVar4;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  float fVar6;
  UnityEngine_Vector2_o value;
  int32_t local_34;
  
  if ((DAT_04568a0f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_ContainsKey__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_255);
    FUN_01bab630(&StringLiteral_15636);
    DAT_04568a0f = 1;
  }
  pSVar3 = (__this->fields).LJLADKMLDEF;
  if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(pSVar3,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).LJLADKMLDEF;
    local_34 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendFormat(pSVar3,StringLiteral_15636,arg0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).LJLADKMLDEF;
      if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar3,HKJPKDKDKAG,(MethodInfo *)0x0);
        pSVar3 = (__this->fields).LJLADKMLDEF;
        if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
          System_Text_StringBuilder__Append(pSVar3,StringLiteral_255,(MethodInfo *)0x0);
          pSVar3 = (__this->fields).LJLADKMLDEF;
          if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__Append(pSVar3,EHNFGMGKCHO,(MethodInfo *)0x0);
            iVar2 = PCOEHCPGBBG__DGMBALOKJDJ(EHNFGMGKCHO,10,(MethodInfo *)0x0);
            if (CJJNBBIFAPM != (UnityEngine_UI_Text_o *)0x0) {
              __this_00 = UnityEngine_UI_Graphic__get_rectTransform
                                    ((UnityEngine_UI_Graphic_o *)CJJNBBIFAPM,(MethodInfo *)0x0);
              if (DAT_0455fffe == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fffe = '\x01';
              }
              if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
                fVar6 = (__this->fields).ELCCJMINMNI;
                value.fields.y =
                     fVar6 * (UnityEngine_Vector2_TypeInfo->static_fields->upVector).fields.y *
                     (float)(iVar2 + 1);
                value.fields.x =
                     fVar6 * (UnityEngine_Vector2_TypeInfo->static_fields->upVector).fields.x *
                     (float)(iVar2 + 1);
                UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).LJLADKMLDEF;
                if (pSVar3 != (System_Text_StringBuilder_o *)0x0) {
                  uVar4 = (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                                    (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
                  (*(CJJNBBIFAPM->klass->vtable)._75_set_text.methodPtr)
                            (CJJNBBIFAPM,uVar4,(CJJNBBIFAPM->klass->vtable)._75_set_text.method);
                  __this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)CJJNBBIFAPM,(MethodInfo *)0x0);
                  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
                    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields).FEHFKJKABDN;
                    if (pSVar5 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                      bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                                        (pSVar5,(Il2CppObject *)HKJPKDKDKAG,
                                         Method_System_Collections_Generic_Dictionary<string,_Text>_ContainsKey__
                                        );
                      if (!bVar1) {
                        pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                                 (__this->fields).FEHFKJKABDN;
                        if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0
                           ) goto LAB_0362946c;
                        System_Collections_Generic_Dictionary<object,_object>__Add
                                  (pSVar5,(Il2CppObject *)HKJPKDKDKAG,(Il2CppObject *)CJJNBBIFAPM,
                                   Method_System_Collections_Generic_Dictionary<string,_Text>_Add__)
                        ;
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0362946c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

