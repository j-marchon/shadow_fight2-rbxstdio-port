// Nekki.SF2.Core.ApplicationController$$Crash @ RVA 0x30C0034

void Nekki_SF2_Core_ApplicationController__Crash(int32_t OEABPLMGMJI,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_AndroidJavaObject_o *pUVar3;
  UnityEngine_AndroidJavaObject_o *pUVar4;
  UnityEngine_AndroidJavaObject_o *__this;
  undefined8 uVar5;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  long lVar7;
  System_Object_array *pSVar8;
  
  if ((DAT_0456627b & 1) == 0) {
    FUN_01bab630(&UnityEngine_AndroidJavaClass_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__);
    FUN_01bab630(&Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
    FUN_01bab630(&UnityEngine_AndroidJavaObject_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte[]>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<byte[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<byte[]>_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_18620);
    FUN_01bab630(&StringLiteral_19245);
    FUN_01bab630(&StringLiteral_19240);
    FUN_01bab630(&StringLiteral_13704);
    FUN_01bab630(&StringLiteral_16424);
    FUN_01bab630(&StringLiteral_21674);
    FUN_01bab630(&StringLiteral_18613);
    FUN_01bab630(&StringLiteral_18515);
    DAT_0456627b = 1;
    method = extraout_x1;
  }
  if (OEABPLMGMJI == 1) {
    pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (pSVar8 == (System_Object_array *)0x0) goto LAB_031c0550;
    if (StringLiteral_13704 == (Il2CppObject *)0x0) {
      pIVar6 = (Il2CppObject *)0x0;
    }
    else {
      lVar2 = thunk_FUN_01bda71c(StringLiteral_13704,(((pSVar8->obj).klass)->_1).element_class);
      pIVar6 = StringLiteral_13704;
      if (lVar2 == 0) goto LAB_031c0480;
    }
    if ((int)pSVar8->max_length == 0) goto LAB_031c047c;
    pSVar8->m_Items[0] = pIVar6;
    thunk_FUN_01c20e04();
    pUVar3 = (UnityEngine_AndroidJavaObject_o *)
             thunk_FUN_01bda818(UnityEngine_AndroidJavaObject_TypeInfo);
    UnityEngine_AndroidJavaObject___ctor(pUVar3,StringLiteral_19245,pSVar8,(MethodInfo *)0x0);
    pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (pSVar8 != (System_Object_array *)0x0) {
      if ((pUVar3 != (UnityEngine_AndroidJavaObject_o *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pUVar3,(((pSVar8->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_031c0480;
      if ((int)pSVar8->max_length == 0) goto LAB_031c047c;
      pSVar8->m_Items[0] = (Il2CppObject *)pUVar3;
      thunk_FUN_01c20e04(pSVar8->m_Items,pUVar3);
      pUVar3 = (UnityEngine_AndroidJavaObject_o *)
               thunk_FUN_01bda818(UnityEngine_AndroidJavaObject_TypeInfo);
      UnityEngine_AndroidJavaObject___ctor(pUVar3,StringLiteral_19240,pSVar8,(MethodInfo *)0x0);
      pUVar4 = (UnityEngine_AndroidJavaObject_o *)
               thunk_FUN_01bda818(UnityEngine_AndroidJavaClass_TypeInfo);
      UnityEngine_AndroidJavaClass___ctor
                ((UnityEngine_AndroidJavaClass_o *)pUVar4,StringLiteral_16424,(MethodInfo *)0x0);
      lVar2 = Method_System_Array_Empty<object>__;
      lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
      if (lVar7 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<object>__);
        lVar7 = *(long *)(lVar2 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
        pUVar4 = (UnityEngine_AndroidJavaObject_o *)
                 UnityEngine_AndroidJavaObject__CallStatic<object>
                           (pUVar4,StringLiteral_18515,
                            (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                            Method_UnityEngine_AndroidJavaObject_CallStatic<AndroidJavaObject>__);
        lVar2 = Method_System_Array_Empty<object>__;
        lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar7 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar7 = *(long *)(lVar2 + 0x38);
        }
        lVar7 = *(long *)(lVar7 + 0x10);
        if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_01b81620();
        }
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
          pUVar4 = (UnityEngine_AndroidJavaObject_o *)
                   UnityEngine_AndroidJavaObject__Call<object>
                             (pUVar4,StringLiteral_18613,
                              (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                              Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
          lVar2 = Method_System_Array_Empty<object>__;
          lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
          if (lVar7 == 0) {
            FUN_01b8167c(Method_System_Array_Empty<object>__);
            lVar7 = *(long *)(lVar2 + 0x38);
          }
          lVar7 = *(long *)(lVar7 + 0x10);
          if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_01b81620();
          }
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01ba7564();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if (pUVar4 != (UnityEngine_AndroidJavaObject_o *)0x0) {
            __this = (UnityEngine_AndroidJavaObject_o *)
                     UnityEngine_AndroidJavaObject__Call<object>
                               (pUVar4,StringLiteral_18620,
                                (System_Object_array *)**(undefined8 **)(lVar2 + 0xb8),
                                Method_UnityEngine_AndroidJavaObject_Call<AndroidJavaObject>__);
            pSVar8 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
            if (pSVar8 != (System_Object_array *)0x0) {
              lVar2 = thunk_FUN_01bda71c(pUVar4,(((pSVar8->obj).klass)->_1).element_class);
              if (lVar2 != 0) {
                if ((int)pSVar8->max_length != 0) {
                  pSVar8->m_Items[0] = (Il2CppObject *)pUVar4;
                  thunk_FUN_01c20e04(pSVar8->m_Items,pUVar4);
                  if ((pUVar3 != (UnityEngine_AndroidJavaObject_o *)0x0) &&
                     (lVar2 = thunk_FUN_01bda71c(pUVar3,(((pSVar8->obj).klass)->_1).element_class),
                     lVar2 == 0)) goto LAB_031c0480;
                  if (1 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[1] = (Il2CppObject *)pUVar3;
                    thunk_FUN_01c20e04(pSVar8->m_Items + 1,pUVar3);
                    if (__this != (UnityEngine_AndroidJavaObject_o *)0x0) {
                      UnityEngine_AndroidJavaObject__Call
                                (__this,StringLiteral_21674,pSVar8,(MethodInfo *)0x0);
                      return;
                    }
                    goto LAB_031c0550;
                  }
                }
LAB_031c047c:
                    /* WARNING: Subroutine does not return */
                FUN_01bab8d0();
              }
LAB_031c0480:
              uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar5,0);
            }
          }
        }
      }
    }
  }
  else {
    if (OEABPLMGMJI != 0) {
      return;
    }
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<byte[]>_TypeInfo,method);
    System_Collections_Generic_List<object>___ctor
              (__this_00,Method_System_Collections_Generic_List<byte[]>__ctor__);
    pIVar6 = (Il2CppObject *)FUN_01bab718(byte___TypeInfo,0x20000000);
    lVar2 = Method_System_Collections_Generic_List<byte[]>_Add__;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar8 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      while (pSVar8 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar8->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar8->m_Items[(int)uVar1] = pIVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
                    /* try { // try from 031c0530 to 032c06a3 has its CatchHandler @ 031c0530
                       catch() { ... } // from try @ 031c0530 with catch @ 031c0530
                       catch() { ... } // from try @ 031c0744 with catch @ 031c0530
                       catch() { ... } // from try @ 031c0800 with catch @ 031c0530
                       catch() { ... } // from try @ 031c08b4 with catch @ 031c0530 */
        pIVar6 = (Il2CppObject *)FUN_01bab718(byte___TypeInfo,0x20000000);
        lVar2 = Method_System_Collections_Generic_List<byte[]>_Add__;
        pSVar8 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
      }
    }
  }
LAB_031c0550:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

