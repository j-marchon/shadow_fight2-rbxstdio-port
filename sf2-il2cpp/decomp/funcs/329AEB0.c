// OMANDMDCGMF$$BGKECKJMNNJ @ RVA 0x329AEB0

void OMANDMDCGMF__BGKECKJMNNJ
               (UnityEngine_Material_o *PMGHIPKHGJP,float KEFILECBPMF,float BHOOMCEABGH,
               float KJNOLCAONEB,float JLPMKKKMANE,UnityEngine_Color_o EFJKPCADGJH,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Event_o *__this;
  float y;
  
  if ((DAT_0456738b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15203);
    DAT_0456738b = 1;
  }
  __this = UnityEngine_Event__get_current((MethodInfo *)0x0);
  if (__this != (UnityEngine_Event_o *)0x0) {
    iVar2 = UnityEngine_Event__get_type(__this,(MethodInfo *)0x0);
    if (iVar2 != 7) {
      return;
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)PMGHIPKHGJP,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_15203,(MethodInfo *)0x0);
      return;
    }
    iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (PMGHIPKHGJP != (UnityEngine_Material_o *)0x0) {
      y = (float)iVar2 - BHOOMCEABGH;
      UnityEngine_Material__SetPass(PMGHIPKHGJP,0,(MethodInfo *)0x0);
      UnityEngine_GL__Color(EFJKPCADGJH,(MethodInfo *)0x0);
      UnityEngine_GL__Begin(7,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF,y,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF + KJNOLCAONEB,y,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(1.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF + KJNOLCAONEB,y - JLPMKKKMANE,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__TexCoord2(0.0,1.0,(MethodInfo *)0x0);
      UnityEngine_GL__Vertex3(KEFILECBPMF,y - JLPMKKKMANE,0.0,(MethodInfo *)0x0);
      UnityEngine_GL__End((MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

