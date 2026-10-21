// Nekki.SF2.GUI.TimerLabel$$CPMHIEJENLD @ RVA 0x33BB2CC

void Nekki_SF2_GUI_TimerLabel__CPMHIEJENLD(Nekki_SF2_GUI_TimerLabel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  pSVar1 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                     ((int64_t)(__this->fields).SecondsString,
                      *(bool *)((long)&(__this->fields).super._Alias + 1),
                      *(bool *)((long)&(__this->fields).super._Alias + 2),
                      *(bool *)((long)&(__this->fields).super._Alias + 3),
                      *(bool *)((long)&(__this->fields).super._Alias + 4),(__this->fields).IsSeconds
                      ,(__this->fields).IsMinutes,
                      *(System_String_o **)&(__this->fields).UseDaysDelimiter,
                      (__this->fields).Delimiter,(bool)(__this->fields).super.field_0x1e1,
                      *(bool *)((long)&(__this->fields).super._Alias + 5),
                      *(bool *)((long)&(__this->fields).super._Alias + 6),
                      *(bool *)((long)&(__this->fields).super._Alias + 7),
                      (__this->fields).super._ToUpperCase,(__this->fields).DaysString,
                      (__this->fields).HoursString,(__this->fields).MinutesString,
                      *(int32_t *)&(__this->fields).super.field_0x1e4,in_stack_ffffffffffffffe0);
                    /* WARNING: Could not recover jumptable at 0x034bb364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._75_set_text.methodPtr)
            (__this,pSVar1,(__this->klass->vtable)._75_set_text.method);
  return;
}

