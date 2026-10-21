// PLIIGOCLJDL$$BHOKMPEGAEG @ RVA 0x351969C

int32_t PLIIGOCLJDL__BHOKMPEGAEG(PLIIGOCLJDL_o *__this,int64_t BIIMFIDNPJP,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppClass *__this_01;
  Il2CppObject *pIVar2;
  int iVar3;
  int index;
  int iVar4;
  
  if ((DAT_0456895f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__)
    ;
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_0456895f = 1;
  }
  __this_00 = (__this->fields).FONCNGHPHDG;
  if (__this_00 != (System_Collections_Generic_Dictionary_IFOIPICDFHN__JCFJFJCKLKG__o *)0x0) {
    pIVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,1,
                        Method_System_Collections_Generic_Dictionary<IFOIPICDFHN,_JCFJFJCKLKG>_get_Item__
                       );
    if (pIVar1 == (Il2CppObject *)0x0) {
      return 0;
    }
    __this_01 = pIVar1[2].klass;
    if (__this_01 != (Il2CppClass *)0x0) {
      iVar3 = 0;
      index = 0;
      iVar4 = -1;
      do {
        if (*(int *)&(__this_01->_1).namespaze <= index) {
          return 0;
        }
        pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,index,
                            Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar2[2].klass != iVar4) {
          iVar3 = index + 1;
        }
        if (pIVar2[1].monitor == (void *)BIIMFIDNPJP) {
          return iVar3;
        }
        __this_01 = pIVar1[2].klass;
        index = index + 1;
        iVar4 = *(int *)&pIVar2[2].klass;
      } while (__this_01 != (Il2CppClass *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

