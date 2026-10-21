// CocosAnimation$$DHEBEHGMBOA @ RVA 0x33F7C3C

void CocosAnimation__DHEBEHGMBOA(CocosAnimation_o *__this,int32_t JJMCKHDALCF,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_Sprite__o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Sprite_o *__this_01;
  BMNKDDCJACM_o *pBVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if ((DAT_04567f9d & 1) == 0) {
    FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Sprite>_get_Item__);
    DAT_04567f9d = 1;
  }
  if (((__this->fields).OFNNCOJAFJB < JJMCKHDALCF) || (JJMCKHDALCF < (__this->fields).PAGAGEMKILK))
  {
    return;
  }
  __this_00 = (__this->fields).HKCNDNBLAHI;
  if (__this_00 != (System_Collections_Generic_List_Sprite__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return;
    }
    pBVar3 = (__this->fields).CAOKGHKPFAE;
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,JJMCKHDALCF,
                        Method_System_Collections_Generic_List<Sprite>_get_Item__);
    if (pBVar3 != (BMNKDDCJACM_o *)0x0) {
      (*(pBVar3->klass->vtable)._5_unknown.methodPtr)
                (pBVar3,pIVar2,(pBVar3->klass->vtable)._5_unknown.method);
      pBVar3 = (__this->fields).CAOKGHKPFAE;
      if (pBVar3 != (BMNKDDCJACM_o *)0x0) {
        (*(pBVar3->klass->vtable)._4_unknown.methodPtr)
                  (pBVar3,1,(pBVar3->klass->vtable)._4_unknown.method);
        if ((__this->fields)._autoSize == false) {
          return;
        }
        iVar1 = (__this->fields).CAFKGBHLMOI;
        if (iVar1 == 1) {
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_045660f4 == '\0') {
            FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
            DAT_045660f4 = '\x01';
          }
          if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->NADOFNLEECE;
          if (fVar4 < 1.0) {
            fVar4 = 1.0;
          }
        }
        else {
          fVar4 = 1.0;
          if (iVar1 == 0) {
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04565e5d == '\0') {
              FUN_01bab630(&FGKGKDEJCOG_TypeInfo);
              DAT_04565e5d = '\x01';
            }
            if ((FGKGKDEJCOG_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar4 = FGKGKDEJCOG_TypeInfo->static_fields->CHCLEFKLOKH;
          }
        }
        pBVar3 = (__this->fields).CAOKGHKPFAE;
        if ((pBVar3 != (BMNKDDCJACM_o *)0x0) &&
           (__this_01 = (UnityEngine_Sprite_o *)
                        (*pBVar3->klass[1]._1.byval_arg.data)
                                  (pBVar3,*(undefined8 *)&pBVar3->klass[1]._1.byval_arg.bits),
           __this_01 != (UnityEngine_Sprite_o *)0x0)) {
          UVar5 = UnityEngine_Sprite__get_rect(__this_01,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x034f7e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pBVar3->klass->vtable)._7_unknown.methodPtr)
                    (fVar4 * UVar5.fields.m_Width,fVar4 * UVar5.fields.m_Height,pBVar3,
                     (pBVar3->klass->vtable)._7_unknown.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

